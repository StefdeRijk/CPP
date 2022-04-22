#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal
{
	protected:
		std::string		_type;

	public:
		WrongAnimal(std::string type);
		WrongAnimal(WrongAnimal const &object);
		WrongAnimal();
		virtual ~WrongAnimal();

		WrongAnimal&	operator=(WrongAnimal const &object);

		void		makeSound(void) const;
		std::string	getType(void) const;
};

#endif