#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed {
	private:
		int	nb;
		static const int statint = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &src);

		Fixed	&operator=(Fixed const &rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
