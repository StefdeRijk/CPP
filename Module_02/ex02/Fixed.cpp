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

bool Fixed::operator>(const Fixed &object) const
{
	return (this->getRawBits() > object.getRawBits());
}

bool Fixed::operator>=(const Fixed &object) const
{
	return (this->getRawBits() >= object.getRawBits());
}

bool Fixed::operator<(const Fixed &object) const
{
	return (this->getRawBits() < object.getRawBits());
}

bool Fixed::operator<=(const Fixed &object) const
{
	return (this->getRawBits() <= object.getRawBits());
}

bool Fixed::operator==(const Fixed &object) const
{
	return (this->getRawBits() == object.getRawBits());
}

bool Fixed::operator!=(const Fixed &object) const
{
	return (this->getRawBits() != object.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &object) const
{
	Fixed	result;

	result.setRawBits(this->getRawBits() + object.getRawBits());
	return (result);
}

Fixed	Fixed::operator-(const Fixed &object) const
{
	Fixed	result;

	result.setRawBits(this->getRawBits() - object.getRawBits());
	return (result);
}

Fixed	Fixed::operator*(const Fixed &object) const
{
	Fixed	result(this->toFloat() * object.toFloat());

	return (result);
}

Fixed	Fixed::operator/(const Fixed &object) const
{
	Fixed	result(this->toFloat() / object.toFloat());

	return (result);
}

Fixed&	Fixed::operator++(void)
{
	this->value++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	old(*this);

	++(*this);
	return (old);
}

Fixed&	Fixed::operator--(void)
{
	this->value--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	old(*this);

	--(*this);
	return (old);
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
	int		power = this->ft_pow(2, this->bits);
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

Fixed	&Fixed::min(Fixed &object1, Fixed &object2)
{
	if (object1 < object2)
		return (object1);
	return (object2);
}

const Fixed	&Fixed::min(Fixed const &object1, Fixed const &object2)
{
	if (object1 < object2)
		return (object1);
	return (object2);
}

Fixed	&Fixed::max(Fixed &object1, Fixed &object2)
{
	if (object1 > object2)
		return (object1);
	return (object2);
}

const Fixed	&Fixed::max(Fixed const &object1, Fixed const &object2)
{
	if (object1 > object2)
		return (object1);
	return (object2);
}

std::ostream&	operator<<(std::ostream &ostream, const Fixed &myClass)
{
	ostream << myClass.toFloat();
	return (ostream);
}
