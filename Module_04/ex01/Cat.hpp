#ifndef Cat_HPP
#define Cat_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Cat: public Animal
{
	private:
		Brain*	brain;

	public:
		Cat(Cat const &object);
		Cat();
		~Cat();

		Cat&	operator=(Cat const &object);

		void		setIdeas(std::string new_idea) const;
		std::string	getIdea(void) const;
		void		makeSound(void) const;
};

#endif