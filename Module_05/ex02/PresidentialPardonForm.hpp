#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &object);
		~PresidentialPardonForm();

		PresidentialPardonForm&	operator=(PresidentialPardonForm const &object);

	protected:
		void	action(void) const;
	
	private:
		std::string	_target;
};

std::ostream&	operator<<(std::ostream &ostream, const PresidentialPardonForm &myClass);

#endif