#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void): value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int int_value)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = int_value << this->bits;
}

Fixed::Fixed(const float float_value)
{
	int	power = ft_pow(2, this->bits);

	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(float_value * power);
}

Fixed::Fixed(Fixed const &object)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = object;
}

Fixed&	Fixed::operator=(Fixed const &object)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &object)
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

float	Fixed::toFloat(void) const
{
	int		power = ft_pow(2, this->bits);
	float	result = (float)this->value / power;

	return (result);
}

int	Fixed::toInt(void) const
{
	return (this->value >> this->bits);
}

int	Fixed::ft_pow(int value, int power) const
{
	int	result;

	result = 1;
	for (int i = 0; i < power; i++)
		result *= value;
	return (result);
}

std::ostream&	operator<<(std::ostream &ostream, const Fixed &myClass)
{
	ostream << myClass.toFloat();
	return (ostream);
}
