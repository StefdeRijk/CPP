#ifndef FragTRAP_HPP
#define FragTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap: virtual public ClapTrap
{
	protected:
		std::string		Name;
		unsigned int	Hit_points;
		unsigned int	Energy_points;
		unsigned int	Attack_damage;
		unsigned int	Max_hit_points;

	public:
		FragTrap(std::string name);
		FragTrap(FragTrap const &object);
		FragTrap();
		~FragTrap();
		FragTrap&	operator=(FragTrap const &object);
		void		Attack(const std::string& target);
		void		highFivesGuys(void);
};

#endif