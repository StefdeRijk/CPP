#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
	public:
		Zombie(void);
		virtual		~Zombie();
		void		announce(void);
		bool		setName(std::string name);
		std::string	getName(void);

	private:
		std::string	name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif