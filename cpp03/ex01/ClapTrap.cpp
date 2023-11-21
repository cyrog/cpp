#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("void"), _hp(10), _nrg(10), _ad(0) {
	std::cout << "void ClapTrap created" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destroyed" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _hp(10), _nrg(10), _ad(0) {
	_name = name;
	std::cout << "ClapTrap named " << _name << " was created" << std::endl;
}

ClapTrap::ClapTrap(std::string name, unsigned int hp, unsigned int nrg, unsigned int ad) {
	_name = name;
	_hp = hp;
	_nrg = nrg;
	_ad = ad;
	std::cout << "Custom ClapTrap named " << _name << " was created" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	_name = rhs._name;
	_hp = rhs._hp;
	_nrg = rhs._nrg;
	_ad = rhs._ad;

	return *this;
}

void	ClapTrap::attack(const std::string &target) {
	if (_nrg == 0) {
		std::cout << "ClapTrap " << _name << " has no energy left, it cannot attack" << std::endl;
		return ;
	}
	_nrg = _nrg - 1;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _ad << " damage" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (_hp == 0)
		std::cout << "ClapTrap " << _name << " is already dead, what are you doing ?" << std::endl;
	if (_hp <= amount) {
		std::cout << "ClapTrap " << _name << " took " << amount << " damage and is now dead" << std::endl;
		_hp = 0;
		return ;
	}
	_hp = _hp - amount;
	std::cout << "ClapTrap " << _name << " takes " << amount << " damage, it now has " << _hp << " _hp" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (_nrg == 0) {
		std::cout << "ClapTrap " << _name << " has no energy left, it cannot repair itself" << std::endl;
		return ;
	}
	else if (_hp == 10) {
		std::cout << "ClapTrap " << _name << " already has max hp" << std::endl;
		return ;
	}
	_hp = _hp + amount;
	_nrg = _nrg - 1;
	if (_hp > 10) {
		_hp = 10;
		std::cout << "ClapTrap " << _name << " is now full hp" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " gained " << amount << " _hp" << std::endl;
}
