#ifndef	CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap {
	protected:
		std::string		_name;
		unsigned int	_hp;
		unsigned int	_nrg;
		unsigned int	_ad;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(std::string name, unsigned int hp, unsigned int nrg, unsigned int ad);
		ClapTrap(ClapTrap const &src);
		~ClapTrap();

		ClapTrap	&operator=(ClapTrap const &rhs);

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
