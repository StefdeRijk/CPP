#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScavTrap: public ClapTrap
{
	private:
		std::string		Name;
		unsigned int	Hit_points;
		unsigned int	Energy_points;
		unsigned int	Attack_damage;
		unsigned int	Max_hit_points;

	public:
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &object);
		ScavTrap();
		~ScavTrap();
		ScavTrap&	operator=(ScavTrap const &object);
		void		Attack(const std::string& target);
		void		guardGate(void);
};

#endif