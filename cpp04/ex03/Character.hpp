#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class	Character {
	private:
		std::string	name;
		AMateria	*inventory[4];
		AMateria	*floor[4];

	public:
		Character();
		Character(std::string name);
		Character(Character const &src);
		~Character();

		Character &operator=(Character const &rhs);
		std::string	&getName() const;
		void	equip(AMateria *m);
		void	unequip(AMateria *m);
};

#ifndef
