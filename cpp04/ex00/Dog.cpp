#include "Animals.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << type << " constructor called" << std::endl;
}

Dog::Dog(Dog const &src) {
	std::cout << type << " copy constructor called" << std::endl;
	*this = src;
}

Dog::~Dog() {
	std::cout << type << " destructor called" << std::endl;
}

Dog	&Dog::operator=(Dog const &rhs) {
	type = rhs.type;

	return *this;
}

void	Dog::makeSound(void) const {
	std::cout << type << " is barking" << std::endl;
}
