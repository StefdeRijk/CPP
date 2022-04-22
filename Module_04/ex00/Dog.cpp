#include "Dog.hpp"

#include <iostream>

Dog::Dog(Dog const &object)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_type = object._type;
}

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog&	Dog::operator=(Dog const &object)
{
	std::cout << "Dog assignment operator called" << std::endl;
	this->_type = object._type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof!" << std::endl;
}
