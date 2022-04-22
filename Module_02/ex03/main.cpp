#include "Point.hpp"
#include "Fixed.hpp"

int main(void) 
{
	Point 		a1(0.0f, 0.0f);
	Point 		b1(0.0f, 1.5f);
	Point		c1(1.5f, 0.0f);
	Point		point1(0.5f, 0.5f);

	std::cout << "Point inside triangle: " << bsp(a1, b1, c1, point1) << std::endl;

	Point 		a2(0.0f, 0.0f);
	Point 		b2(0.0f, -1.5f);
	Point		c2(-1.5f, 0.0f);
	Point		point2(0.5f, 0.5f);

	std::cout << "Point outside triangle: " << bsp(a2, b2, c2, point2) << std::endl;

	Point 		a3(0.0f, 0.0f);
	Point 		b3(0.0f, -1.5f);
	Point		c3(-1.5f, 0.0f);
	Point		point3(-0.5f, -0.5f);

	std::cout << "Point inside triangle: " << bsp(a3, b3, c3, point3) << std::endl;

	Point 		a4(0.0f, 0.0f);
	Point 		b4(0.0f, -1.5f);
	Point		c4(-1.5f, 0.0f);
	Point		point4(0.0f, 0.0f);

	std::cout << "Point outside triangle: " << bsp(a4, b4, c4, point4) << std::endl;

	Point 		a5(0.0f, 0.0f);
	Point 		b5(0.0f, -1.5f);
	Point		c5(-1.5f, 0.0f);
	Point		point5(-0.01f, -0.5f);

	std::cout << "Point inside triangle: " << bsp(a5, b5, c5, point5) << std::endl;

	return 0;
}
