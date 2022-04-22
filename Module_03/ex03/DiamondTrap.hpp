#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <string>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string		Name;
		unsigned int	Hit_points;
		unsigned int	Energy_points;
		unsigned int	Attack_damage;
		unsigned int	Max_hit_points;

	public:
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const &object);
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap&	operator=(DiamondTrap const &object);
		void			Attack(const std::string& target);
		void			WhoAmI(void);
};

#endif