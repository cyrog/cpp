#ifndef	CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap {
	private:
		std::string	name;
		int			hp;
		int			nrg;
		int			ad;
	public:
		ClapTrap();
		~ClapTrap();
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
