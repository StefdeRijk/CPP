#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

Intern::Intern()
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(Intern const &object)
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = object;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern&	Intern::operator=(Intern const &object)
{
	std::cout << "Intern copy assignment operator called" << std::endl;
	(void)object;
	return (*this);
}

static Form	*Shrubbery_creation(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

static Form	*Robotomy_request(std::string target)
{
	return (new RobotomyRequestForm(target));
}

static Form	*Presidential_pardon(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form *Intern::makeForm(std::string formName, std::string target)
{
	std::string	formNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form *(*formFunctions[])(std::string) = {Shrubbery_creation, Robotomy_request, Presidential_pardon};
	Form	*new_form;

	for (int i = 0; i < 3; i++)
	{
		if (formName == formNames[i])
		{
			new_form = formFunctions[i](target);
			std::cout << "Intern creates " << formName << std::endl;
			return (new_form);
		}
	}
	std::cout << "Intern couldn't make " << formName << std::endl;
	return (NULL);
}
