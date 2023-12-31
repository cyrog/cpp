#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA	{
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		void		attack();
		std::string	getName();
		void		setWeapon(Weapon weapon);
	private:
		std::string	_name;
		Weapon&		_weapon;
};

#endif
