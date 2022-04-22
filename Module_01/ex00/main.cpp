#include <iostream>
#include "Zombie.hpp"

int	main(void)
{
	std::cout << "Creating zombie Jan manually" << std::endl;

	Zombie	zombie1("Jan");
	zombie1.announce();

	std::cout << std::endl << "Creating zombie Mark using the randomChump function" << std::endl;
	randomChump("Mark");

	std::cout << std::endl << "Creating zombie Pietertje using the newZombie function" << std::endl;

	Zombie	*pietertje = newZombie("Pietertje");
	pietertje->announce();
	delete pietertje;

	std::cout << std::endl << "Creating zombie Gerrit manually" << std::endl;

	Zombie	zombie2("Gerrit");
	zombie2.announce();

	return (0);
}
