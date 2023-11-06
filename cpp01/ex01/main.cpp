#include "Zombie.hpp"

int	main(void) {
	int	n = 12;
	Zombie	*Horde = zombieHorde(n, "Bob");
	for (int i = 0; i < n; i++)
		Horde[i].announce();
	delete [] Horde;
}
