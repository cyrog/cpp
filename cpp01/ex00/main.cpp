#include "Zombie.hpp"

int	main() {
	Zombie first;
	first.announce();

	Zombie *bobby = newZombie("Bobby");

	//newZombie("bob")->announce();
	bobby->announce();
	randomChump("chump");


	delete bobby;
	return (0);

}