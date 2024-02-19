#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class	Character : public ICharacter {
	protected:
		std::string const	_name;
		AMateria	*_inventory[4];
		AMateria	*_ground[4];
	public:
		Character();
		Character(std::string name);
		Character(Character const &src);
		~Character();

		Character	&operator=(Character const &rhs);
		std::string const	&getName() const;
		void		equip(AMateria *m);
		void		unequip(int slot);
		void		use(int slot, ICharacter &target);
};

#endif
