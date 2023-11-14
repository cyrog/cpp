#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
    private:
        std::string _name;
    public:
		Zombie();
		~Zombie();
		Zombie(std::string);
        void	announce();
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif