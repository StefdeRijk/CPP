#include "FragTrap.hpp"
#include "ClapTrap.hpp"

#include <iostream>

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->Name = name;
	this->Hit_points = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
	this->Max_hit_points = Hit_points;

	std::cout << "FragTrap name constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &object)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	this->Attack_damage = object.Attack_damage;
	this->Energy_points = object.Energy_points;
	this->Hit_points = object.Hit_points;
	this->Max_hit_points = object.Max_hit_points;
	this->Name = object.Name;
}

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap const &object)
{
	std::cout << "FragTrap assignment operator called" << std::endl;
	this->Attack_damage = object.Attack_damage;
	this->Energy_points = object.Energy_points;
	this->Hit_points = object.Hit_points;
	this->Max_hit_points = object.Max_hit_points;
	this->Name = object.Name;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->Name << " requests a high five cause he has no friends" << std::endl;
}

void	FragTrap::Attack(const std::string& target)
{
	this->Energy_points--;
	std::cout << "FragTrap " << this->Name << " attacks " << target 
		<< ", causing " << this->Attack_damage << " points of damage!" << std::endl;
}
