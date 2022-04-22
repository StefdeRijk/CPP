#ifndef Dog_HPP
#define Dog_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Dog: public Animal
{
	private:
		Brain*	brain;

	public:
		Dog(Dog const &object);
		Dog();
		~Dog();

		Dog&	operator=(Dog const &object);

		void		setIdeas(std::string new_idea) const;
		std::string	getIdea(void) const;
		void		makeSound(void) const;
};

#endif