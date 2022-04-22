#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(): _name(""), _grade(0)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name), _grade(grade)
{
	std::cout << "Bureaucrat initializer constructor called" << std::endl;
	if (this->_grade > 150)
		throw GradeTooLowException();
	else if (this->_grade < 1)
		throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &object): _name(object._name)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = object;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const &object)
{
	std::cout << "Bureaucrat copy assignment operator called" << std::endl;
	this->_grade = object._grade;
	return (*this);
}

void	Bureaucrat::incrementGrade(void)
{
	if (this->_grade >= 150)
		throw GradeTooLowException();
	else if (this->_grade <= 1)
		throw GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::decrementGrade(void)
{
	if (this->_grade >= 150)
		throw GradeTooLowException();
	else if (this->_grade <= 1)
		throw GradeTooHighException();
	this->_grade++;
}

void	Bureaucrat::signForm(Form form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " couldn't sign " << form.getName() << " because ";
		std::cerr << e.what() << '\n';
	}
}

void	Bureaucrat::executeForm(const Form &form)
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

const std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::setGrade(int new_grade)
{
	this->_grade = new_grade;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high!\n");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low!\n");
}

std::ostream&	operator<<(std::ostream &ostream, const Bureaucrat &myClass)
{
	ostream << myClass.getName() << ", bureaucrat grade " << myClass.getGrade() << ".\n";
	return (ostream);
}
