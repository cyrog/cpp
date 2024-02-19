#include "Character.hpp"

Character::Character() : _name("no name") {
	std::cout << "default Character constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = nullptr;
		this->_ground[i] = nullptr;
	}
}

Character::Character(std::string name) : _name(name) {
	std::cout << "string Character constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = nullptr;
		this->_ground[i] = nullptr;
	}
}

Character::Character(Character const &src) : _name(src._name) {

	std::cout << "copy constructor Character called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (src._inventory[i])
			this->_inventory[i] = src._inventory[i]->clone();
		else
			this->_inventory[i] = nullptr;
	}
}

Character::~Character() {
	std::cout << "default Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		delete _inventory[i];
		delete _ground[i];
	}
}

Character	&Character::operator=(const Character &src) {
	if (&src == this)
		return *this;
	for (int i = 0; i < 4; i++) {
		delete this->_inventory[i];
		this->_inventory[i] = nullptr;
	}
	for (int i = 0; i < 4; i++) {
		if (src._inventory[i])
			this->_inventory[i] = src._inventory[i]->clone();
		else
			this->_inventory[i] = nullptr;
	}
	return *this;
}

std::string const &Character::getName() const {
	return this->_name;
}

void	Character::equip(AMateria *m) {
	if (!m) {
		std::cout << "* unknown element *" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++) {
		if (!_inventory[i]) {
			_inventory[i] = m;
			break;
		}
	}
	std::cout << "* " << this->getName() << " equipped " << m->getType() << " *" << std::endl;
}

void	Character::unequip(int slot) {
	if (slot < 4 && slot >= 0 && this->_inventory[slot]) {
		for (int i = 0 ; i < 4; i++) {
			if (!this->_ground[i]) {
				this->_ground[i] = this->_inventory[slot];
				this->_inventory[slot] = nullptr;
				std::cout << "* " << this->getName() << " unequipped " << this->_ground[i]->getType() << " *" << std::endl;
			return ;
			}
		}
		delete this->_ground[0];
		this->_ground[0] = this->_inventory[slot];
		this->_inventory[slot] = nullptr;
		std::cout << "* " << this->getName() << " unequipped " << this->_ground[0]->getType() << " *" << std::endl;
	}
	else
		std::cout << "* there is no equipment in the " << slot << " inventory slot *" << std::endl;
}

void	Character::use(int slot, ICharacter &target) {
	if (slot < 4 && slot >= 0) {
		if (_inventory[slot] && _inventory[slot] != nullptr)
			_inventory[slot]->use(target);
		else
			std::cout << "* there is no equipment in the " << slot << " inventory slot *" << std::endl;
	}
}
