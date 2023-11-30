#include "Animals.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << BOLDYELLOW << type << " constructor called" << RESET << std::endl;
	brain = new Brain;
}

Cat::Cat(Cat const &src) {
	std::cout << type << " copy constructor called" << std::endl;
	brain = new Brain(*src.brain);
	*this = src;

}

Cat::~Cat() {
	std::cout << BOLDBLUE << type << " destructor called" << RESET << std::endl;
	delete brain;
}

Cat	&Cat::operator=(Cat const &rhs) {
	type = rhs.type;
	brain = new Brain(*rhs.brain);

	return *this;
}

void	Cat::makeSound(void) const {
	std::cout << type << " is meowing" << std::endl;
}

Brain	*Cat::getBrain(void) const {
	return brain;
}
