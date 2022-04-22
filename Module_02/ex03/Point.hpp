#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point
{
	public:
		Point(void);
		Point(const Fixed new_x, const Fixed new_y);
		Point(Point const &object);
		virtual	~Point();

		Point&	operator=(Point &object);

		const Fixed	getX(void) const;
		const Fixed	getY(void) const;

	private:
		const Fixed	x;
		const Fixed	y;
};

std::ostream&	operator<<(std::ostream &ostream, Point &myClass);
bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
