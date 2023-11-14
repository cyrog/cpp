#include "Zombie.hpp"

Zombie::Zombie() {
	//std::cout << "anon Zombie was created" << std::endl;
}

Zombie::~Zombie() {
	std::cout << _name << ": died" << std::endl;
}

void	Zombie::announce(void) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name) {
	_name = name;
}