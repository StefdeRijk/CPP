#include "Array.hpp"
#include <iostream>

int main( void ) {
	Array<int>	arr1(3);
	Array<int>	arr2 = arr1;

	arr1[1] = 15;

	for (int i = 0; i < 3; i++)
		std::cout << arr1[i] << std::endl;
	
	std::cout << std::endl;

	for (int i = 0; i < 3; i++)
		std::cout << arr2[i] << std::endl;

	std::cout << std::endl;

	Array<int>	arr3(arr1);

	for (int i = 0; i < 3; i++)
		std::cout << arr3[i] << std::endl;

	std::cout << std::endl;

	int * a = new int(7);

	std::cout << *a << std::endl;

	std::cout << std::endl;

	try
	{
		std::cout << arr1[-1] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	
	try
	{
		std::cout << arr1[3] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
