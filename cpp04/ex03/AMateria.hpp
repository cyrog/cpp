#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class	AMateria {
	protected:
		std::string	type;
	
	public:
		AMateria();
		AMateria(AMateria const &src);
		AMateria(std::string const typee);
		virtual ~AMateria();

		AMateria	&operator=(AMateria const &rhs);

		std::string const &getType() const;

		virtual AMateria	*clone() const = 0;
		virtual void		user(ICharacter &target);

};

#endif
