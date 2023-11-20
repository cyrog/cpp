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

		//comparison
		bool	operator<(Fixed const &rhs) const;
		bool	operator>(Fixed const &rhs) const;
		bool	operator<=(Fixed const &rhs) const;
		bool	operator>=(Fixed const &rhs) const;
		bool	operator==(Fixed const &rhs) const;
		bool	operator!=(Fixed const &rhs) const;
		//artithmetic
		Fixed	operator+(Fixed const &rhs) const;
		Fixed	operator-(Fixed const &rhs) const;
		Fixed	operator*(Fixed const &rhs) const;
		Fixed	operator/(Fixed const &rhs) const;
		//i++, ++i, i--, --i
		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

		//min max
		static Fixed		&min(Fixed &a, Fixed &b);
		static const Fixed	&min(Fixed const &a, Fixed const &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		static const Fixed	&max(Fixed const &a, Fixed const &b);

};

std::ostream	&operator<<(std::ostream &out, Fixed const &rhs);

#endif
