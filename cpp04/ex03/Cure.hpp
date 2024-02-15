#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class	Cure : public AMateria {
	protected:
		std::string type;
	public:
		Cure();
		Cure(Cure const &src);
		~Cure();

		Cure	&operator=(Cure const &rhs);
		AMateria	*clone(void) const;

#endif
