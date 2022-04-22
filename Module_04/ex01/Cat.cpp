#include "Cat.hpp"

#include <iostream>

Cat::Cat(Cat const &object)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_type = object._type;
	this->brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->brain->ideas[i] = object.brain->ideas[i];
}

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
	this->brain = new Brain();
}

Cat&	Cat::operator=(Cat const &object)
{
	std::cout << "Cat assignment operator called" << std::endl;
	this->_type = object._type;
	this->brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->brain->ideas[i] = object.brain->ideas[i];
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

void	Cat::setIdeas(std::string new_idea) const
{
	for (int i = 0; i < 100; i++)
		this->brain->ideas[i] = new_idea;
}

std::string	Cat::getIdea(void) const
{
	return (this->brain->ideas[0]);
}

void	Cat::makeSound(void) const
{
	std::cout << "Purr" << std::endl;
}
