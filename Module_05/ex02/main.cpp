#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include <iostream>

int	main(void)
{
	Bureaucrat					bureaucrat1("Henk", 2);
	ShrubberyCreationForm		shrub("Shrubs");
	RobotomyRequestForm			robotomy("Robots");
	PresidentialPardonForm		presidential("Everyone");

	try
	{
		std::cout << std::endl;
		shrub.beSigned(bureaucrat1);
		shrub.execute(bureaucrat1);

		robotomy.beSigned(bureaucrat1);
		robotomy.execute(bureaucrat1);

		std::cout << std::endl;

		presidential.beSigned(bureaucrat1);
		presidential.execute(bureaucrat1);

		std::cout << std::endl;

		bureaucrat1.executeForm(presidential);

		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	return (0);
}
