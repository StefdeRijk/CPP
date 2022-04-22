#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm: public Form
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &object);
		~RobotomyRequestForm();

		RobotomyRequestForm&	operator=(RobotomyRequestForm const &object);

	protected:
		void	action(void) const;
	
	private:
		std::string	_target;
};

std::ostream&	operator<<(std::ostream &ostream, const RobotomyRequestForm &myClass);

#endif