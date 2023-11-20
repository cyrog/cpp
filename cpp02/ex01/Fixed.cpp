#include "Fixed.hpp"

Fixed::Fixed() : nb(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}


Fixed::Fixed(Fixed const &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(int const n) {
	std::cout << "int constructor called" << std::endl;
	nb = n << bit;
}

Fixed::Fixed(float const f) {
	std::cout << "float constructor called" << std::endl;
	nb = roundf(f * (1 << bit));
}

Fixed	&Fixed::operator=(Fixed const &rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->nb = rhs.getRawBits();

	return *this;
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return nb;
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	nb = raw;
	return ;
}

float	Fixed::toFloat(void) const {
	return	(float)nb / (1 << bit);
}

int		Fixed::toInt(void) const {
	return nb >> bit;
}

std::ostream	&operator<<(std::ostream &out, Fixed const &rhs) {
	out << rhs.toFloat();
	return out;
}
