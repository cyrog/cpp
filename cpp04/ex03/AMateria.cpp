#include "AMateria.hpp"

AMateria::AMateria(void) : type("default") {
	std::cout << "default AMateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const type) {
	std::cout << "string type AMateria constructor called" << std::endl;
}

AMateria::AMateria(AMateria const &src) {
	std::cout << "AMateria copy constructor called" << std::endl;
}


AMateria	AMateria::&operator=(AMateria const &rhs) {
	std::cout << "AMateria operator= called" << std::endl;
	type = rhs.type;
	return (*this);
}

std::string const	&AMateria::getType() const {
	return (type);
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor called" << std::endl;
}
