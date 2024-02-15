#include "Character.hpp"

Character::Character() : name("default name") {
	std::cout << "default character constructor called" << std::endl;
	for (i = 0; i < 4; i++) {
		inventory[i] = nullptr;
		floor[i] = nullptr;
	}
}

Character::Character(std::string name) {
	std::cout << "string name character constructor called" << std::endl;
	name = name;
	for (i = 0; i < 4; i++) {
		inventory[i] = nullptr;
		floor[i] = nullptr;
	}
}

Character::Character(Character const &src) {
	std::cout << "character copy constructor called" << std::endl;
	name = src.name;
	for (i = 0; i < 4; i++) {
		if (src.inventory[i])
			inventory[i] = src.inventory[i]->clone();
		else
			inventory[i] = nullptr;
		if (src.floor[i])
			floor[i] = src.floor[i]->clone();
		else
			floor[i] = nullptr;
	}
}

Character::~Character() {
	std::cout << "character destructor called" << std::endl;

	for (i = 0; i < 4; i++) {
		delete inventory[i];
		delete floor[i];
	}
}

Character	&Character::operator=(Character const &rhs) {
	std::cout << "character operator= called" << std::endl;
	name = rhs.name;

	for (i = 0; i < 4; i++) {
		if (inventory[i]) {
			delete inventory[i];
			inventory[i] = nullptr;
		}
		if (floor[i]) {
			delete floor[i];
			floor[i] = nullptr;
		}
		if (rhs.inventory[i])
			inventory[i] = rhs.inventory[i]->clone();
		if (rhs.floor[i])
			floor[i] = rhs.inventory[i]->clone();
	}
	return *this;
}

std::string	&Character::getName() const {
	return name;
}

void	Character::equip(AMateria *m) {
	if (!m) {
		std::cout << "invalid materia" << std::endl;
		return ;
	}
	for (i = 0; i < 4; i++) {
		if (!inventory[i]) {
			inventory[i] = m;
			std::cout << name << " equip " << m->getType() << " in slot: " << i << std::endl;
			return ;
		}
	}
	std::cout << name << "was unable to equip " << m->getType() << ": inventoty is full" << std::endl;
	return ;
}
