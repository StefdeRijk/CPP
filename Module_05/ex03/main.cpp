#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "Form.hpp"
#include <iostream>

int	main(void)
{
	Bureaucrat	bureaucrat1("Henk", 2);
	Intern		intern;
	Form		*form;

	try
	{
		std::cout << std::endl;

		form = intern.makeForm("robotomy request", "Robots");
		form->execute(bureaucrat1);

		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << std::endl;

		form->beSigned(bureaucrat1);
		bureaucrat1.executeForm(*form);

		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
