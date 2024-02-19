#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(Cure const &src) : AMateria(src) {
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure::~Cure() {
	std::cout << "Cure default destructor called" << std::endl;
}

Cure	&Cure::operator=(Cure const &rhs) {
	if (&rhs == this)
		return *this;
	AMateria::operator=(rhs);
	std::cout << "Cure operator= called" << std::endl;
}

AMateria	*Cure::clone() const {
	return new Cure(*this);
}

void	Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}