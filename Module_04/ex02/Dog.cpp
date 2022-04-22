#include "Dog.hpp"

#include <iostream>

Dog::Dog(Dog const &object)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_type = object._type;
	this->brain = new Brain();
}

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
	this->brain = new Brain();
}

Dog&	Dog::operator=(Dog const &object)
{
	std::cout << "Dog assignment operator called" << std::endl;
	this->_type = object._type;
	this->brain = new Brain();
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}

void	Dog::setIdeas(std::string new_idea) const
{
	for (int i = 0; i < 100; i++)
		this->brain->ideas[i] = new_idea;
}

std::string	Dog::getIdea(void) const
{
	return (this->brain->ideas[0]);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof!" << std::endl;
}
