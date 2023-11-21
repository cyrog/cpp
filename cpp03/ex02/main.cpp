#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

/*int	main(void) {
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
*/

int	main(void) {
	FragTrap	test2("batman");
	ClapTrap	clap("clapman");


	clap.attack("bob");
	test2.highFivesGuys();
	test2.attack("cat");
	test2.attack("cat");
	test2.attack("cat");
	for (int i = 100; i > 0; i--)
		test2.attack("un pieton");
	for (int j = 10; j > 0; j--)
		clap.attack("un helicoptere de combat");
}
