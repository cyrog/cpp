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

//comparison

bool	Fixed::operator<(Fixed const &rhs) const {
	return (this->toFloat() < rhs.toFloat());
}

bool	Fixed::operator>(Fixed const &rhs)  const {
	return (this->toFloat() > rhs.toFloat());
}

bool	Fixed::operator<=(Fixed const &rhs) const {
	return (this->toFloat() <= rhs.toFloat());
}

bool	Fixed::operator>=(Fixed const &rhs) const {
	return (this->toFloat() >= rhs.toFloat());
}

bool	Fixed::operator==(Fixed const &rhs) const {
	return (this->toFloat() == rhs.toFloat());
}

bool	Fixed::operator!=(Fixed const &rhs) const {
	return (this->toFloat() != rhs.toFloat());
}

//arithmetic

Fixed	Fixed::operator+(Fixed const &rhs) const {
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(Fixed const &rhs) const {
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(Fixed const &rhs) const {
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(Fixed const &rhs) const {
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

//i++, ++i, i--, --i

Fixed	&Fixed::operator++(void) {
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed n = *this;
	this->setRawBits(this->getRawBits() + 1);
	return (n);
}

Fixed	&Fixed::operator--(void) {
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed n = *this;
	this->setRawBits(this->getRawBits() - 1);
	return (n);
}

//min max

Fixed	&Fixed::min(Fixed &a, Fixed &b) {
	if (a < b)
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b) {
	if (a > b)
		return (a);
	return (b);
}

Fixed const	&Fixed::min(Fixed const &a, Fixed const &b) {
	if (a < b)
		return (a);
	return (b);
}

Fixed const	&Fixed::max(Fixed const &a, Fixed const &b) {
	if (a > b)
		return (a);
	return (b);
}
