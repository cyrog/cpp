#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << "Ice default constr called" << std::endl;
}

Ice::Ice(Ice const &src) {
	std::cout << "Ice copy constr called" << std::endl;
	type = src.type
}

Ice	&Ice::operator=(Ice const &rhs) {
	std::cout << "Ice operator= called" << std::endl;
	type = rhs.type;
	return (*this);
}

Ice::~Ice() {
	std::cout << "Ice default destructor called" << std::endl;
}
