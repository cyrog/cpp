#include "Zombie.hpp"

int	main(void) {
	int n = 12;
	Zombie	*horde = zombieHorde(n, "bob");
	for (int i = 0; i < n; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}