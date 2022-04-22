#include "Zombie.hpp"

int	main(void)
{
	Zombie*	zombies;
	int		amount_zombies = 7;

	zombies = zombieHorde(amount_zombies, "Gerrit");
	for (int i = 0; i <= amount_zombies; i++)
		zombies[i].announce();
	delete[] zombies;
}
