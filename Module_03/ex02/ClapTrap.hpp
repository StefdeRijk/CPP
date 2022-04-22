#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
	protected:
		std::string		Name;
		unsigned int	Hit_points;
		unsigned int	Energy_points;
		unsigned int	Attack_damage;
		unsigned int	Max_hit_points;

	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &object);
		ClapTrap();
		~ClapTrap();
		ClapTrap&	operator=(ClapTrap const &object);
		void		Attack(const std::string& target);
		void		TakeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif