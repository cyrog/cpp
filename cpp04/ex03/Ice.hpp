#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

<<<<<<< HEAD
class	Ice : public AMateria {
=======
class Ice : public AMateria {
>>>>>>> 8ab5e113abc0c817f5356f2f09ba6bc503b3e897
	public:
		Ice();
		Ice(const Ice &src);
		~Ice();

<<<<<<< HEAD
		Ice	&operator=(const Ice &rhs);

=======
		Ice		&operator=(const Ice &src);
>>>>>>> 8ab5e113abc0c817f5356f2f09ba6bc503b3e897
		AMateria	*clone() const;
		void		use(ICharacter &target);
};

#endif
