#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void): name("")
{
}

Zombie::~Zombie()
{
	std::cout << Zombie::name << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string	Zombie::getName(void)
{
	return (this->name);
}

bool	Zombie::setName(std::string new_name)
{
	if (new_name == "")
		return (false);
	this->name = new_name;
	return (true);
}
