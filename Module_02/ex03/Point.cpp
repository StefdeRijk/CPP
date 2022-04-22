#include "Point.hpp"

Point::Point(void): x(0), y(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Point::Point(const Fixed new_x, const Fixed new_y): x(new_x), y(new_y)
{
	std::cout << "Float constructor called" << std::endl;
}

Point::Point(Point const &object): x(object.x), y(object.y)
{
	std::cout << "Copy constructor called" << std::endl;
}

Point&	Point::operator=(Point &object)
{

	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &object)
	{
		this->x.setRawBits(object.getX().getRawBits());
		this->y.setRawBits(object.getY().getRawBits());
	}
	return (object);
}

Point::~Point()
{
	std::cout << "Destructor called" << std::endl;
}

const Fixed	Point::getX(void) const
{
	return (this->x);
}

const Fixed	Point::getY(void) const
{
	return (this->y);
}

std::ostream&	operator<<(std::ostream &ostream, Point &myClass)
{
	ostream << myClass.getX() << std::endl;
	ostream << myClass.getY();
	return (ostream);
}
