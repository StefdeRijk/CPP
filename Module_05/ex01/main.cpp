#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int	main(void)
{
	Bureaucrat	bureaucrat1("Henk", 2);
	Form		form1("Form1", 3, 6, false);
	Form		form2("Form2", 1, 2, false);

	try
	{
		std::cout << std::endl << form1 << std::endl;

		form1.beSigned(bureaucrat1);

		std::cout << std::endl << form1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Should work fine\n";
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << std::endl << form2 << std::endl;

		form2.beSigned(bureaucrat1);

		std::cout << std::endl << form2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << std::endl << "Bureaucrat is not high enough grade\n";
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << std::endl;
		bureaucrat1.signForm(form1);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << std::endl << "Should work fine\n";
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << std::endl;
		bureaucrat1.signForm(form2);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << std::endl << "Bureaucrat is not high enough grade\n";
		std::cerr << e.what() << '\n';
	}
	

	return (0);
}
