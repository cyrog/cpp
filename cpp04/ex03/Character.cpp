#include "Character.hpp"

<<<<<<< HEAD
Character::Character() : _name("no name") {
	std::cout << "default Character constructor called" << std::endl;
=======
Character::Character() {
	std::cout << "Character default constructor called" << std::endl;
>>>>>>> 8ab5e113abc0c817f5356f2f09ba6bc503b3e897
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = nullptr;
		this->_ground[i] = nullptr;
	}
}

Character::Character(std::string name) : _name(name) {
<<<<<<< HEAD
	std::cout << "string Character constructor called" << std::endl;
=======
	std::cout << "Character name constructor called" << std::endl;
>>>>>>> 8ab5e113abc0c817f5356f2f09ba6bc503b3e897
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = nullptr;
		this->_ground[i] = nullptr;
	}
}

<<<<<<< HEAD
Character::Character(Character const &src) : _name(src._name) {

	std::cout << "copy constructor Character called" << std::endl;
=======
Character::Character(const Character &src) : _name(src._name) {
>>>>>>> 8ab5e113abc0c817f5356f2f09ba6bc503b3e897
	for (int i = 0; i < 4; i++) {
		if (src._inventory[i])
			this->_inventory[i] = src._inventory[i]->clone();
		else
			this->_inventory[i] = nullptr;
	}
<<<<<<< HEAD
}

Character::~Character() {
	std::cout << "default Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		delete _inventory[i];
		delete _ground[i];
=======
	std::cout << "Character copy constructor called" << std::endl;
}

Character::~Character() {
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		delete this->_inventory[i];
		delete this->_ground[i];
>>>>>>> 8ab5e113abc0c817f5356f2f09ba6bc503b3e897
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

<<<<<<< HEAD
std::string const &Character::getName() const {
	return this->_name;
=======
std::string const	&Character::getName() const {
	return (this->_name);
>>>>>>> 8ab5e113abc0c817f5356f2f09ba6bc503b3e897
}

void	Character::equip(AMateria *m) {
	if (!m) {
<<<<<<< HEAD
		std::cout << "* unknown element *" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++) {
		if (!_inventory[i]) {
=======
		std::cout << "* this element is not known to the player *" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++) {
		if(!_inventory[i]) {
>>>>>>> 8ab5e113abc0c817f5356f2f09ba6bc503b3e897
			_inventory[i] = m;
			break;
		}
	}
	std::cout << "* " << this->getName() << " equipped " << m->getType() << " *" << std::endl;
}

<<<<<<< HEAD
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
=======
void	Character::unequip(int idx) {
	if (idx < 4 && idx >= 0 && this->_inventory[idx]) {
		for(int i = 0; i < 4; i++) {
	if (!this->_ground[i]) {
		this->_ground[i] = this->_inventory[idx];
		this->_inventory[idx] = nullptr;
		std::cout << "* " << this->getName() << " unequipped " << this->_ground[i]->getType() << " *" << std::endl;
		return ;
		}
	}
	delete this->_ground[0];
	this->_ground[0] = this->_inventory[idx];
	this->_inventory[idx]= nullptr;
	std::cout << "* " << this->getName() << " unequipped " << this->_ground[0]->getType() << " *" << std::endl;
	}
	else
		std::cout << "* there is no equipement in the " << idx << " inventory slot *" << std::endl;
}

void	Character::use(int idx, ICharacter &target) {
	if (idx >= 0 && idx < 4) {
		if (_inventory[idx] && _inventory[idx] != nullptr)
_inventory[idx]->use(target);
	else
		std::cout << "* there is no equipement in the " << idx << " inventory slot *" << std::endl;
>>>>>>> 8ab5e113abc0c817f5356f2f09ba6bc503b3e897
	}
}
