#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string new_name): name(new_name)
{
}

Zombie::~Zombie()
{
	std::cout << this->name << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
