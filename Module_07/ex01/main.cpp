#include "iter.hpp"
#include <iostream>

int	plus(int amount)
{
	return (amount + 1);
}

int	print_int(int i)
{
	std::cout << i << std::endl;
	return (i);
}

char	plus_char(char amount)
{
	return (amount + 1);
}

char	print_char(char c)
{
	std::cout << c << std::endl;
	return (c);
}

int main( void ) {
	int	arr1[5] = {0, 1, 2, 3, 4};

	::iter(arr1, 5, plus);
	::iter(arr1, 5, print_int);

	std::cout << std::endl;

	char	str[] = "Hello world!";

	::iter(str, 13, plus_char);
	::iter(str, 13, print_char);

	return 0;
}
