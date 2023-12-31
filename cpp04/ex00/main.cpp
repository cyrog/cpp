#include "Animals.hpp"

int main() {

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "test type : " << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;


	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete j;
	delete meta;
	delete i;

	return 0;
}
