#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &object);
		~ShrubberyCreationForm();

		ShrubberyCreationForm&	operator=(ShrubberyCreationForm const &object);

	protected:
		void	action(void) const;
	
	private:
		std::string	_target;
};

std::ostream&	operator<<(std::ostream &ostream, const ShrubberyCreationForm &myClass);

#endif