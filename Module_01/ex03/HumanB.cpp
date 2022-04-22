#include "Weapon.hpp"
#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string new_name): name(new_name), weapon(nullptr)
{
}

HumanB::~HumanB(void)
{
}

void	HumanB::attack(void)
{
	if (this->weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << "No weapon available" << std::endl;
}

void	HumanB::setWeapon(Weapon& new_weapon)
{
	if (new_weapon.getType() == "")
		return ;
	this->weapon = &new_weapon;
}
