#include "ScavTrap.hpp"

#include <iostream>

ScavTrap::ScavTrap(std::string name)
{
	ClapTrap::Name = name;
	this->Name = name;
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
	this->Max_hit_points = Hit_points;

	std::cout << "ScavTrap name constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &object)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	this->Attack_damage = object.Attack_damage;
	this->Energy_points = object.Energy_points;
	this->Hit_points = object.Hit_points;
	this->Max_hit_points = object.Max_hit_points;
	this->Name = object.Name;
}

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const &object)
{
	std::cout << "ScavTrap assignment operator called" << std::endl;
	this->Attack_damage = object.Attack_damage;
	this->Energy_points = object.Energy_points;
	this->Hit_points = object.Hit_points;
	this->Max_hit_points = object.Max_hit_points;
	this->Name = object.Name;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->Name << " is now in Gate keeper mode" << std::endl;
}

void	ScavTrap::Attack(const std::string& target)
{
	this->Energy_points--;
	std::cout << "ScavTrap " << this->Name << " attacks " << target 
		<< ", causing " << this->Attack_damage << " points of damage!" << std::endl;
}
