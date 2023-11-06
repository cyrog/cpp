#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class	Zombie {
	public:
		Zombie(void);
		~Zombie(void);

		Zombie(std::string _name);
		void		announce(void);
		void		setName(std::string _name);
		std::string	getName(void);


	private:
		std::string	_name;
};

	Zombie	*zombieHorde(int N, std::string _name);

#endif
