#include "DiamondTrap.hpp"

#include <iostream>

DiamondTrap::DiamondTrap(std::string name)
{
	ClapTrap::Name = name + "_clap_name";
	ScavTrap::Name = name;
	FragTrap::Name = name;
	this->Name = name;
	this->Hit_points = FragTrap::Hit_points;
	this->Energy_points = ScavTrap::Energy_points;
	this->Attack_damage = FragTrap::Attack_damage;
	this->Max_hit_points = FragTrap::Hit_points;

	std::cout << "DiamondTrap name constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &object)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	this->Attack_damage = object.Attack_damage;
	this->Energy_points = object.Energy_points;
	this->Hit_points = object.Hit_points;
	this->Max_hit_points = object.Max_hit_points;
	this->Name = object.Name;
}

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const &object)
{
	std::cout << "DiamondTrap assignment operator called" << std::endl;
	this->Attack_damage = object.Attack_damage;
	this->Energy_points = object.Energy_points;
	this->Hit_points = object.Hit_points;
	this->Max_hit_points = object.Max_hit_points;
	this->Name = object.Name;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void	DiamondTrap::Attack(const std::string& target)
{
	ScavTrap::Attack(target);
}

void	DiamondTrap::WhoAmI(void)
{
	std::cout << "My name is: " << this->Name << \
		" and my ClapTrap name is: " << ClapTrap::Name << std::endl;
}
