#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", 25, 5, false) , _target("")
{
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5, false), _target(target)
{
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &object): 
	Form(object.getName(), object.getGradeToSign(), object.getGradeToExecute(), object.getSigned()), _target(object._target)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const &object)
{
	std::cout << "PresidentialPardonForm copy assignment operator called" << std::endl;
	this->_target = object._target;
	return (*this);
}

void	PresidentialPardonForm::action(void) const
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
