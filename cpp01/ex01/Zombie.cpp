#include "Zombie.hpp"

Zombie::Zombie(void) {
	this->_name = "anon Zombie";
}

Zombie::~Zombie(void) {
	std::cout << _name << ": died" << std::endl;
}

Zombie::Zombie(std::string _name) {
	this->_name = _name;
}

void	Zombie::announce(void) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string _name) {
	this->_name = _name;
}

std::string	Zombie::getName(void) {
	return (this->_name);
}
