#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap(std::string name): 
	Name(name), Hit_points(10), Energy_points(10), Attack_damage(0)
{
	this->Max_hit_points = Hit_points;

	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &object)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	this->Attack_damage = object.Attack_damage;
	this->Energy_points = object.Energy_points;
	this->Hit_points = object.Hit_points;
	this->Max_hit_points = object.Max_hit_points;
	this->Name = object.Name;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const &object)
{
	std::cout << "ClapTrap assignment operator called" << std::endl;
	this->Attack_damage = object.Attack_damage;
	this->Energy_points = object.Energy_points;
	this->Hit_points = object.Hit_points;
	this->Max_hit_points = object.Max_hit_points;
	this->Name = object.Name;
	return (*this);
}

void	ClapTrap::Attack(const std::string& target)
{
	this->Energy_points--;
	std::cout << "ClapTrap " << this->Name << " attacks " << target 
		<< ", causing " << this->Attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::TakeDamage(unsigned int amount)
{
	this->Hit_points -= amount;

	if (this->Hit_points <= 0)
		std::cout << "ClapTrap " << this->Name << " was hit and takes " 
			<< amount << " points of damage and has not hit points left!" << std::endl;
	else
		std::cout << "ClapTrap " << this->Name << " was hit and takes " 
			<< amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->Energy_points--;
	this->Hit_points += amount;

	if (this->Hit_points > this->Max_hit_points)
	{
		this->Hit_points = this->Max_hit_points;
		std::cout << "ClapTrap " << this->Name << " repairs itself with " 
			<< amount << " points, but can't heal anymore!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->Name << " repairs itself with " 
			<< amount << " points!" << std::endl;
}
