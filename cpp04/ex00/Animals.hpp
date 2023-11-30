#ifndef	ANIMALS_HPP
# define ANIMALS_HPP

#include <iostream>

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

class	Dog	: public Animal {
	public:
		Dog();
		Dog(Dog const &src);
		virtual ~Dog();

		Dog	&operator=(Dog const &rhs);

		virtual void	makeSound() const;
};

class	Cat	: public Animal {
	public:
		Cat();
		Cat(Cat const &src);
		~Cat();

		Cat	&operator=(Cat const &rhs);

		virtual void	makeSound() const;
};


#endif
