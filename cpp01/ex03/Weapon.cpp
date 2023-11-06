#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
	std::cout << "Weapon created" << std::endl;
}

Weapon::~Weapon() {
	std::cout << "Weapon destroyed" << std::endl;
}

void	Weapon::setType(std::string type) {
	_type = type;
}

std::string	const	&Weapon::getType(void) {
	std::string	&type = _type;
	return (type);
}
