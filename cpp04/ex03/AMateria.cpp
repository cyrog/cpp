#include "AMateria.hpp"

AMateria::AMateria(void) : type("default") {
	std::cout << "default AMateria constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &src) {
	type = src.type;
	std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria::AMateria(std::string const type) : type(type) {
	std::cout << "AMateria string constructor called" << std::endl;
}

AMateria	&AMateria::operator=(const AMateria &rhs) {
	type = rhs.type;
	std::cout << "AMateria operator= overload called" << std::endl;
	return *this;
}

std::string const 	&AMateria::getType() const {
	return this->type;
}

void	AMateria::use(ICharacter &target) {
	std::cout << "* using " << this->type  << " on " << target.getName() << " *" << std::endl;
}
