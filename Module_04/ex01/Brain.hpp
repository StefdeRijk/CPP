#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"
#include <string>

class Brain
{
	private:

	public:
		Brain(Brain const &object);
		Brain();
		~Brain();

		std::string ideas[100];
		Brain&	operator=(Brain const &object);
};

#endif