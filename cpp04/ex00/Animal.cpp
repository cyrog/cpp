#include "Animals.hpp"

Animal::Animal() : type("default") {
	std::cout << type << " animal created" << std::endl;
}

Animal::~Animal() {
	std::cout << "an animal was destroyed" << std::endl;
}

Animal::Animal(Animal const &src) {
	std::cout << "animal copy constructor called" << std::endl;
	*this = src;
}

Animal::Animal(std::string typee) : type(typee) {
	std::cout << "animal string constructor called" << std::endl;
}

std::string	Animal::getType(void) const {
	return type;
}

Animal	&Animal::operator=(Animal const &rhs) {
	std::cout << "Animal assignment operator called" << std::endl;
	type = rhs.type;

	return *this;
}

void	Animal::makeSound(void) const {
	std::cout << "an Animal is animaling" << std::endl;
}
