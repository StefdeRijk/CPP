#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie temp_zombie = Zombie(name);

	temp_zombie.announce();
}
