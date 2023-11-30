#ifndef	ANIMALS_HPP
# define ANIMALS_HPP

#include <iostream>
#include "myColors.hpp"

class	Animal {
	protected:
		std::string	type;
	public:
		Animal();
		Animal(std::string typee);
		Animal(Animal const &src);
		virtual ~Animal();

		Animal	&operator=(Animal const &rhs);

		std::string	getType() const;


		virtual void	makeSound() const;
};

class	Brain {
	private:
		std::string	ideas[100];
	public:
		Brain();
		Brain(Brain const &src);
		~Brain();

		Brain &operator=(Brain const &rhs);


		void		setIdeas(int i, std::string str);
		std::string getIdeas(int i);
};

class	Dog	: public Animal {
	public:
		Dog();
		Dog(Dog const &src);
		virtual ~Dog();

		Dog	&operator=(Dog const &rhs);

		virtual void	makeSound() const;

		Brain			*getBrain(void) const;

	private:
		Brain	*brain;
};

class	Cat	: public Animal {
	public:
		Cat();
		Cat(Cat const &src);
		~Cat();

		Cat	&operator=(Cat const &rhs);

		virtual void	makeSound() const;

		Brain			*getBrain(void) const;

	private:
		Brain	*brain;

};

#endif
