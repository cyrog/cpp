#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("void", 100, 100, 30) {
	std::cout << "void FragTrap created" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30) {
	std::cout << "FragTrap named " << name << " created" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap named " << _name << " destroyed" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs) {
	std::cout << "FragTrap assignment operator called" << std::endl;
	_name = rhs._name;
	_hp = rhs._hp;
	_nrg = rhs._nrg;
	_ad = rhs._ad;
	return (*this);
}

void	FragTrap::highFivesGuys(void) {
	if (_nrg == 0) {
		std::cout << "FragTrap " << _name << " has no energy, it cannot high five Sadge" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << _name << " throws a high five, he crazy" << std::endl;
	_nrg--;
}
