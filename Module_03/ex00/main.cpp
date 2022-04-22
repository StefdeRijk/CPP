#include "ClapTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap	Henk("Henk");

	std::cout << std::endl;

	Henk.Attack("Gerrit");
	Henk.beRepaired(2);
	Henk.TakeDamage(7);
	Henk.beRepaired(3);

	std::cout << std::endl;
}
