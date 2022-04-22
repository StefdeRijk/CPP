#ifndef INTERN_HPP
# define INTERN_HPP

#include <string>
#include "Form.hpp"

class Intern
{
	public:
		Intern();
		Intern(Intern const &object);
		~Intern();

		Intern&	operator=(Intern const &object);
		
		Form	*makeForm(std::string formName, std::string target);
};

#endif