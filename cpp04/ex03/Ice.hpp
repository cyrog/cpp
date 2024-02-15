#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class	Ice : public AMateria {
	protected:
		std::string	type;

	public:
		Ice();
		Ice(Ice const &src);
		~Ice();

		Ice	&operator=(Ice const &rhs);

		AMateria	*clone(void) const;


};

#endif
