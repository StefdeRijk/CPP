#include "WrongCat.hpp"

#include <iostream>

WrongCat::WrongCat(WrongCat const &object)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	this->_type = object._type;
}

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat&	WrongCat::operator=(WrongCat const &object)
{
	std::cout << "WrongCat assignment operator called" << std::endl;
	this->_type = object._type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Purr" << std::endl;
}
