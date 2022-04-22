#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <string>

class WrongCat: public WrongAnimal
{
	private:

	public:
		WrongCat(WrongCat const &object);
		WrongCat();
		~WrongCat();

		WrongCat&	operator=(WrongCat const &object);

		void	makeSound(void) const;
};

#endif