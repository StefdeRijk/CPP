#include "Brain.hpp"

#include <iostream>

Brain::Brain(Brain const &object)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = object;
}

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain&	Brain::operator=(Brain const &object)
{
	std::cout << "Brain assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = object.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}
