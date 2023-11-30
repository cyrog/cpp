#include "Animals.hpp"

Animal::Animal() : type("default") {
	std::cout << BOLDGREEN << type << " animal created" << std::endl;
}

Animal::~Animal() {
	std::cout << BOLDRED << "an animal was destroyed" << RESET << std::endl;
}

Animal::Animal(Animal const &src) {
	std::cout << "animal copy constructor called" << std::endl;
	*this = src;
}

Animal::Animal(std::string typee) : type(typee) {
	std::cout << BOLDGREEN << "animal string constructor called" << RESET << std::endl;
}

std::string	Animal::getType(void) const {
	return type;
}

Animal	&Animal::operator=(Animal const &rhs) {
	std::cout << "Animal assignment operator called" << std::endl;
	type = rhs.type;

	return *this;
}


//this is now abstract and cant be done
void	Animal::makeSound(void) const {
	std::cout << "an Animal is animaling" << std::endl;
}
