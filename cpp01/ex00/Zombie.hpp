#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class	Zombie {

	public:
		Zombie(void);
		Zombie(std::string);
		~Zombie(void);
		void		announce(void);
		void		setName(std::string _name);
		std::string	getName(void);

	private:
		std::string	_name;
};

	Zombie	*newZombie(std::string _name);
	void	randomChump(std::string _name);

#endif
