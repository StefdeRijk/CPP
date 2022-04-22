#ifndef Animal_HPP
#define Animal_HPP

#include <string>

class Animal
{
	protected:
		std::string		_type;

	public:
		Animal(std::string type);
		Animal(Animal const &object);
		Animal();
		virtual ~Animal();

		Animal&	operator=(Animal const &object);

		virtual void	makeSound(void) const = 0;
		std::string		getType(void) const;
};

#endif