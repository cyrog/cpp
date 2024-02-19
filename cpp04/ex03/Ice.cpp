#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(Ice const &src) : AMateria(src) {
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice::~Ice() {
	std::cout << "Ice default destructor called" << std::endl;
}

Ice	&Ice::operator=(Ice const &rhs) {
	if (&rhs == this)
		return *this;
	AMateria::operator=(rhs);
	std::cout << "Ice operator= called" << std::endl;
}

AMateria	*Ice::clone() const {
	return new Ice(*this);
}

void	Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
