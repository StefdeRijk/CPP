#include "Form.hpp"
#include <iostream>

Form::Form(): _name(""), _signed(false), _grade_to_sign(0), _grade_to_execute(0) 
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const std::string name, int grade_to_sign, int grade_to_execute, bool is_signed): 
	_name(name), _signed(is_signed), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute)
{
	std::cout << "Form initializer constructor called" << std::endl;
	if (this->_grade_to_sign > 150)
		throw GradeTooLowException();
	else if (this->_grade_to_sign < 1)
		throw GradeTooHighException();
	if (this->_grade_to_execute > 150)
		throw GradeTooLowException();
	else if (this->_grade_to_execute < 1)
		throw GradeTooHighException();
}

Form::Form(Form const &object): _name(object._name), _signed(object._signed), \
	_grade_to_sign(object._grade_to_sign), _grade_to_execute(object._grade_to_execute)
{
	std::cout << "Form copy constructor called" << std::endl;
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

Form&	Form::operator=(Form const &object)
{
	std::cout << "Form copy assignment operator called" << std::endl;
	this->_signed = object._signed;
	return (*this);
}

const std::string	Form::getName(void) const
{
	return (this->_name);
}

int	Form::getGradeToExecute(void) const
{
	return (this->_grade_to_execute);
}

int	Form::getGradeToSign(void) const
{
	return (this->_grade_to_sign);
}

bool	Form::getSigned(void) const
{
	return (this->_signed);
}

void	Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_grade_to_sign)
		throw GradeTooLowException();
	else
		this->_signed = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high!\n");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low!\n");
}

std::ostream&	operator<<(std::ostream &ostream, const Form &myClass)
{
	ostream << myClass.getName() << ", Form grade to sign: " << myClass.getGradeToSign() << \
		", grade to execute: " << myClass.getGradeToExecute() << ", is signed: " << \
			myClass.getSigned() << ".\n";
	return (ostream);
}
