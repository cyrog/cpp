#include "Zombie.hpp"

Zombie::Zombie() : _name("anon") {
	std::cout << _name << ": was created" << std::endl;
	//_name = "anon";
}

Zombie::~Zombie() {
	std::cout << _name << ": was destroyed" << std::endl;
}

Zombie::Zombie(std::string name) {
	_name = name;
}

void	Zombie::announce() {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}