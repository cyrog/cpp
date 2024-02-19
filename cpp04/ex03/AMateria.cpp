#include "AMateria.hpp"

AMateria::AMateria(void) : type("default") {
	std::cout << "default AMateria constructor called" << std::endl;
}

AMateria::AMateria(AMateria const &src) {
	type = src.type;
	std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria::AMateria(std::string const typee) {
	type = typee;
	std::cout << "AMateria string constructor called" << std::endl;
}

AMateria	&AMateria::operator=(AMateria const &rhs) {
	type = rhs.type;
	std::cout << "AMateria operator= overload called" << std::endl;
	return *this;
}
