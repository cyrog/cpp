#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap	test("mbappe");

	test.attack("target1");
	test.attack("target1");
	test.attack("target1");
	test.attack("target1");
	test.attack("target1");
	test.attack("target1");
	test.attack("target1");
	test.attack("target1");
	test.attack("target1");
	test.beRepaired(4);
	test.beRepaired(4);
	test.takeDamage(3);
	test.beRepaired(4);
	test.takeDamage(3);
	test.beRepaired(4);
	test.beRepaired(4);
	test.takeDamage(3);
	test.takeDamage(3);
	test.takeDamage(3);
}
