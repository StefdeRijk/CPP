#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void): value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed &object)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = object;
}

Fixed&	Fixed::operator=(Fixed &object)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = object.value;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}
