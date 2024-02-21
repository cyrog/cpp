<<<<<<< HEAD
#include "Character.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

int main() {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
=======
#include "AMateria.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int	main(void) {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice);
	src->learnMateria(new Cure);
	ICharacter* me = new Character("me");
	AMateria *tmp;
>>>>>>> 8ab5e113abc0c817f5356f2f09ba6bc503b3e897
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
<<<<<<< HEAD
	ICharacter* bob = new Character("bob");
=======
	ICharacter *bob = new Character("bob");
>>>>>>> 8ab5e113abc0c817f5356f2f09ba6bc503b3e897
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}
