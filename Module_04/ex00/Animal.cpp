#include "Animal.hpp"

#include <iostream>

Animal::Animal(std::string type): 
	_type(type)
{
	std::cout << "Animal type constructor called" << std::endl;
}

Animal::Animal(Animal const &object)
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->_type = object._type;
}

Animal::Animal(): 
	_type("")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal&	Animal::operator=(Animal const &object)
{
	std::cout << "Animal assignment operator called" << std::endl;
	this->_type = object._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << "Unknown animal sounds!" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}
