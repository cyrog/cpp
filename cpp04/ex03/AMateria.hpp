#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class	AMateria {
	protected:
		std::string type;
	public:
		AMateria();
		AMateria(std::string const type);
		AMateria(AMateria const &src);
		virtual ~AMateria();

		std::string const &getType() const; //returns type

		AMateria &operator=(AMateria const &rhs);

		virtual	AMateria	*clone(void) const;
		virtual	void		use(ICharacter &target);

		~AMateria();


};

#endif
