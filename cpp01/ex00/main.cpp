#include "Zombie.hpp"

int	main(void) {
	Zombie	first;
	Zombie	second("Bob 2lan");
	Zombie	*third = newZombie("Rob 3");

	first.announce();
	second.announce();
	third->announce();

	randomChump("zChump");

	delete third;
	return (0);

}
