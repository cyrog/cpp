#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon) {
	std::cout << "HumanA was created" << std::endl;
}

HumanA::~HumanA() {
	std::cout << "HumanA was destroyed" << std::endl;
}

std::string	HumanA::getName(void) {
	return (this->_name);
}
void	HumanA::attack(void) {
	std::cout << this->_name << " attacks with " << this->_weapon.getType() << std::endl;
	return ;
}
