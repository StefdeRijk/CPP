#ifndef Cat_HPP
#define Cat_HPP

#include "Animal.hpp"
#include <string>

class Cat: public Animal
{
	private:

	public:
		Cat(Cat const &object);
		Cat();
		~Cat();

		Cat&	operator=(Cat const &object);

		void	makeSound(void) const;
};

#endif