#include <iostream>

int	main(void)
{
	std::string	brain_str = "HI THIS IS BRAIN";
	std::string	*brain_ptr = &brain_str;
	std::string	&brain_ref = brain_str;

	std::cout << "Memory adress of string: " << &brain_str << std::endl;
	std::cout << "Memory adress of pointer: " << brain_ptr << std::endl;
	std::cout << "Memory adress of reference: " << &brain_ref << std::endl<< std::endl;

	std::cout << "Value of string: " << brain_str << std::endl;
	std::cout << "Value of pointer: " << *brain_ptr << std::endl;
	std::cout << "Value of reference: " << brain_ref << std::endl;
}
