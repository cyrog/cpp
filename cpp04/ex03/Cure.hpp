#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure();
		Cure(const Cure &src);
		~Cure();

<<<<<<< HEAD
		Cure &operator=(const Cure &rhs);

=======
		Cure		&operator=(const Cure &src);
>>>>>>> 8ab5e113abc0c817f5356f2f09ba6bc503b3e897
		AMateria	*clone() const;
		void		use(ICharacter &target);
};

#endif
