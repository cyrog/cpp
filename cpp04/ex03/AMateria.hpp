#ifndef AMATERIA_HPP
# define AMATERIA_HPP

<<<<<<< HEAD
#include <iostream>
#include <string>
#include "ICharacter.hpp"

class	AMateria {
	protected:
		std::string	type;
	public:
		AMateria();
		AMateria(const AMateria &src);
		AMateria(std::string const type);
		virtual ~AMateria();

		AMateria	&operator=(AMateria const &rhs);

		std::string const &getType() const;

		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);

=======
#include <string>
#include <iostream>
#include "ICharacter.hpp"

class AMateria {
	protected:
		std::string type;
	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(const AMateria &src);
		virtual	~AMateria();
		AMateria	&operator=(const AMateria &src);

		std::string const	&getType() const;
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);
>>>>>>> 8ab5e113abc0c817f5356f2f09ba6bc503b3e897
};

#endif
