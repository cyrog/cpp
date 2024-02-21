#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

<<<<<<< HEAD
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
=======
class Character : public ICharacter {

	std::string const	_name;
	AMateria		*_inventory[4];
	AMateria		*_ground[4];

	public:	
		Character();
		Character(std::string name);
		Character(const Character &src);
		~Character();

		Character	&operator=(const Character &src);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
>>>>>>> 8ab5e113abc0c817f5356f2f09ba6bc503b3e897
};

#endif
