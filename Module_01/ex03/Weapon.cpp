#include "Weapon.hpp"

Weapon::Weapon(std::string new_type): type(new_type)
{
}

Weapon::~Weapon(void)
{
}

const std::string&	Weapon::getType(void)
{
	return (this->type);
}

void	Weapon::setType(const std::string& new_type)
{
	if (new_type == "")
		return ;
	this->type = new_type;
}
