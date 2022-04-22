#include "WrongAnimal.hpp"

#include <iostream>

WrongAnimal::WrongAnimal(std::string type): 
	_type(type)
{
	std::cout << "WrongAnimal type constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &object)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	this->_type = object._type;
}

WrongAnimal::WrongAnimal(): 
	_type("")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const &object)
{
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	this->_type = object._type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Unknown WrongAnimal sounds!" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}
