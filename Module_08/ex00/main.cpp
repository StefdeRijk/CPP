#include "easyfind.hpp"
#include <iostream>
#include <array>

int main( void ) {
	std::array<int, 5> a = {3, 5, 1, 0, 8};

	try
	{
		std::cout << easyfind(a, 3) << std::endl;
		std::cout << easyfind(a, 5) << std::endl;
		std::cout << *easyfind(a, 5) << std::endl;
		std::cout << *easyfind(a, 8) << std::endl;
		std::cout << *easyfind(a, 10) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
