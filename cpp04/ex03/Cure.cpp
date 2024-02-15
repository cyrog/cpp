#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << "Cure default cure constructor called" << std::endl;
}

Cure::Cure(Cure const &src) {
	std::cout << "Cure copy constr called" << std::endl;
	type = src.type;
}

Cure	&Cure::operator=(Cure const &rhs) {
	std::cout << "Cure operator= called" << std::endl;
	type = rhs.type;
	return (*this);
}

Cure::~Cure() {
	std::cout << "Cure default destructor called" << std::endl;
}
