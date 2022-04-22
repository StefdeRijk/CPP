#ifndef Dog_HPP
#define Dog_HPP

#include "Animal.hpp"
#include <string>

class Dog: public Animal
{
	private:

	public:
		Dog(Dog const &object);
		Dog();
		~Dog();

		Dog&	operator=(Dog const &object);

		void	makeSound(void) const;
};

#endif