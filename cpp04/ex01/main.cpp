#include "Animals.hpp"

int main() {
	const Animal *meute[4];

	for (int i = 0; i < 4; i++) {
		if (i % 2 == 0)
			meute[i] = new Dog();
		else
			meute[i] = new Cat();
	}

	std::cout << "some tests below" << std::endl;
	std::cout << "----------------" << std::endl;
	std::cout << "makeSound()" << std::endl;

	std::cout << "meute[0] is a " << meute[0]->getType() << std::endl;
	meute[0]->makeSound();
	std::cout << "meute[1] is a " << meute[1]->getType() << std::endl;
	meute[1]->makeSound();
	std::cout << "meute[2] is a " << meute[2]->getType() << std::endl;
	meute[2]->makeSound();
	std::cout << "meute[3] is a " << meute[3]->getType() << std::endl;
	meute[3]->makeSound();

	std::cout << "now deleting la meute" << std::endl;

	for (int i = 0; i < 4; i++) {
		delete meute[i];
	}


	std::cout << "setting some ideas" << std::endl;

	Cat	leChat;

	leChat.getBrain()->setIdeas(12, "idea number 12");
	std::cout << leChat.getBrain()->getIdeas(12) << std::endl;

	return 0;
}
