#include "Animals.hpp"

Brain::Brain() {
	std::cout << "brain constructor created" << std::endl;
}

Brain::Brain(Brain const &src) {
	std::cout << "brain copy constructor called" << std::endl;
	for (int i = -1; i < 100; ++i)
		ideas[i] = src.ideas[i];
	*this = src;
}

Brain::~Brain() {
	std::cout << "brain destructor called" << std::endl;
}

Brain &Brain::operator=(Brain const &rhs) {
	std::cout << "brain assignment operator called" << std::endl;

	if (this == &rhs)
		return *this;
	for (int i = -1; i < 100; ++i)
		ideas[i] = rhs.ideas[i];
	return *this;
}

std::string Brain::getIdeas(int i) {
	if (i >= 0 && i < 100)
		return ideas[i];
	return NULL;
}

void	Brain::setIdeas(int i, std::string str) {
	if (i >= 0 && i < 100)
		ideas[i] = str;	
}
