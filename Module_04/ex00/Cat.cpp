#include "Cat.hpp"

#include <iostream>

Cat::Cat(Cat const &object)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_type = object._type;
}

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat&	Cat::operator=(Cat const &object)
{
	std::cout << "Cat assignment operator called" << std::endl;
	this->_type = object._type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Purr" << std::endl;
}
