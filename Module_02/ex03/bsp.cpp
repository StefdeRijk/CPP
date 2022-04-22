#include "Point.hpp"
#include "Fixed.hpp"

float	cross_prod(Point a, Point b)	
{
	return (a.getX().toFloat() * b.getY().toFloat() - a.getY().toFloat() * b.getX().toFloat());
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Point	a_to_b((b.getX().toFloat() - a.getX().toFloat()), (b.getY().toFloat() - a.getY().toFloat()));
	Point	b_to_c((c.getX().toFloat() - b.getX().toFloat()), (c.getY().toFloat() - b.getY().toFloat()));
	Point	c_to_a((a.getX().toFloat() - c.getX().toFloat()), (a.getY().toFloat() - c.getY().toFloat()));
	Point	a_to_point((point.getX().toFloat() - a.getX().toFloat()), (point.getY().toFloat() - a.getY().toFloat()));
	Point	b_to_point((point.getX().toFloat() - b.getX().toFloat()), (point.getY().toFloat() - b.getY().toFloat()));
	Point	c_to_point((point.getX().toFloat() - c.getX().toFloat()), (point.getY().toFloat() - c.getY().toFloat()));

	float	cross_a_b = cross_prod(a_to_b, a_to_point);
	float	cross_b_c = cross_prod(b_to_c, b_to_point);
	float	cross_c_a = cross_prod(c_to_a, c_to_point);

	if (cross_a_b > 0 && cross_b_c > 0 && cross_c_a > 0)
		return (true);
	if (cross_a_b < 0 && cross_b_c < 0 && cross_c_a < 0)
		return (true);
	return (false);
}
