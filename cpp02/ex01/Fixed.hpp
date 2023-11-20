#ifndef	FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

class	Fixed	{
	private:
		int	nb;
		static int const bit = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &src);
		Fixed(int const  n);
		Fixed(float const f);

		Fixed	&operator=(Fixed const &rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

};

std::ostream	&operator<<(std::ostream &out, Fixed const &rhs);

#endif


