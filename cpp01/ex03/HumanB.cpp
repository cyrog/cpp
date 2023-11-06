#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
	_weapon = NULL;
	std::cout << "HumanB was created" << std::endl;
}

HumanB::~HumanB() {
	std::cout << "HumanB was destroyed" << std::endl;
}

std::string	HumanB::getName(void) {
	return (this->_name);
}

void	HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
}

void	HumanB::attack(void) {
	if (_weapon)
		std::cout << _name << " attacks with " << this->_weapon->getType() << std::endl;
	else
		std::cout << _name << " attacks but is unarmed" << std::endl;
}
