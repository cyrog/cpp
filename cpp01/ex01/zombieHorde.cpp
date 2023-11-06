#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std::string _name) {
	Zombie	*Horde = NULL;
	if (n > 0) {
		Horde = new Zombie[n];
		for (int i = 0; i < n; i++)
			Horde[i].setName(_name);
	}
	return (Horde);
}
