#include "Zombie.hpp"

Zombie::Zombie(void) {
	this->_name = "anon zombie";
}

Zombie::~Zombie(void) {
	std::cout << _name << ": has died\n";	
}

Zombie::Zombie(std::string _name) {
	this->_name = _name;
}

void	Zombie::announce(void) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}
