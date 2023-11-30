#include "Animals.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << BOLDCYAN << type << " constructor called" << RESET << std::endl;
	brain = new Brain;
}

Dog::Dog(Dog const &src) {
	std::cout << type << " copy constructor called" << std::endl;
	*this = src;
}

Dog::~Dog() {
	std::cout << BOLDMAGENTA << type << " destructor called" << RESET << std::endl;
	delete brain;
}

Dog	&Dog::operator=(Dog const &rhs) {
	type = rhs.type;
	brain =  rhs.brain;

	return *this;
}

void	Dog::makeSound(void) const {
	std::cout << type << " is barking" << std::endl;
}

Brain	*Dog::getBrain(void) const {
	return brain;
}
