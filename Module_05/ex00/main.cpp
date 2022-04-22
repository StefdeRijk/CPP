#include "Bureaucrat.hpp"
#include <iostream>

int	main(void)
{
	Bureaucrat	bureaucrat1("Henk", 2);
	try
	{
		bureaucrat1.incrementGrade();
		bureaucrat1.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cout << "Grade incremented too much\n";
		std::cerr << e.what() << '\n';
	}

	std::cout << bureaucrat1.getGrade() << std::endl;

	try
	{
		Bureaucrat	bureaucrat2("Piet", 0);
	}
	catch(const std::exception& e)
	{
		std::cout << "Grade initialized as 0\n";
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat	bureaucrat3("Gerrit", 151);
	}
	catch(const std::exception& e)
	{
		std::cout << "Grade initialized as 151\n";
		std::cerr << e.what() << '\n';
	}

	std::cout << bureaucrat1;

	return (0);
}
