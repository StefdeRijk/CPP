#include "RobotomyRequestForm.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequestForm", 72, 45, false) , _target("")
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45, false), _target(target)
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &object): 
	Form(object.getName(), object.getGradeToSign(), object.getGradeToExecute(), object.getSigned()), _target(object._target)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const &object)
{
	std::cout << "RobotomyRequestForm copy assignment operator called" << std::endl;
	this->_target = object._target;
	return (*this);
}

void	RobotomyRequestForm::action(void) const
{
	std::cout << "Bzzzz\nBzzzzzzzz\nBzzzz\n";
	
	std::srand(std::time(NULL));
	if (std::rand() % 2)
		std::cout << this->_target << " has been robotomized" << std::endl;
	else
		std::cout << "Robotomy has failed" << std::endl;
}
