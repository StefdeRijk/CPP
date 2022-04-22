#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
	public:
		Weapon(std::string new_type);
		~Weapon(void);
		void				setType(const std::string& new_type);
		const std::string&	getType(void);

	private:
		std::string	type;
};

#endif
