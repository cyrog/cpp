#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("name"), hp(10), nrg(10), ad(0) {
	std::cout << "ClapTrap created" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destroyed" << std::endl;
}

void	ClapTrap::attack(const std::string &target) {
	if (nrg <= 0)
		std::cout << "ClapTrap [" << name << "] has no energy left, it cannot attack" << std::endl;
	std::cout << "ClapTrap [" << name << "] attacks " << target << ", causing " << ad << " damage" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {

}
