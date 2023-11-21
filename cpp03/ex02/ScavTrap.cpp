#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("void", 100, 50, 20) {
	std::cout << "void ScavTrap created" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20) {
	std::cout << "ScavTrap named " << name << " was created" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destroyed" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs) {
	std::cout << "ScavTrap assignment operator called" << std::endl;
	_name = rhs._name;
	_hp = rhs._hp;
	_nrg = rhs._nrg;
	_ad = rhs._ad;

	return *this;
}

void	ScavTrap::attack(const std::string &target) {
	if (_nrg == 0) {
		std::cout << "ScavTrap " << _name << " has no energy left, it cannot attack" << std::endl;
		return ;
	}
	_nrg = _nrg - 1;
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _ad << " damage" << std::endl;
}

void	ScavTrap::guardGate() {
	if (_nrg == 0) {
		std::cout << "ScavTrap " << _name << " has no energy left, it cannot vibe" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _name << " is now vibing" << std::endl;
	_nrg--;
}
