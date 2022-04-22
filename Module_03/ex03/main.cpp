#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap	Henk("Henk");
	ScavTrap	Bas("Bas");
	FragTrap	Gerrit("Gerrit");
	DiamondTrap	Piet("Piet");

	std::cout << std::endl;

	Henk.Attack("Bas");
	Henk.beRepaired(2);
	Henk.TakeDamage(7);
	Henk.beRepaired(3);
	Henk.Attack("Bas");

	std::cout << std::endl;

	Bas.Attack("Bas");
	Bas.beRepaired(2);
	Bas.TakeDamage(7);
	Bas.beRepaired(3);
	Bas.Attack("Bas");
	Bas.guardGate();

	std::cout << std::endl;

	Gerrit.Attack("Bas");
	Gerrit.beRepaired(2);
	Gerrit.TakeDamage(7);
	Gerrit.beRepaired(3);
	Gerrit.Attack("Bas");
	Gerrit.highFivesGuys();

	std::cout << std::endl;

	Piet.Attack("Bas");
	Piet.beRepaired(2);
	Piet.TakeDamage(7);
	Piet.beRepaired(3);
	Piet.Attack("Bas");
	Piet.WhoAmI();
	Piet.highFivesGuys();
	Piet.guardGate();

	std::cout << std::endl;
}
