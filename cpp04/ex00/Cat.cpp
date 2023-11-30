#include "Animals.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << type << " constructor called" << std::endl;
}

Cat::Cat(Cat const &src) {
	std::cout << type << " copy constructor called" << std::endl;
	*this = src;
}

Cat::~Cat() {
	std::cout << type << " destructor called" << std::endl;
}

Cat	&Cat::operator=(Cat const &rhs) {
	type = rhs.type;

	return *this;
}

void	Cat::makeSound(void) const {
	std::cout << type << " is meowing" << std::endl;
}
