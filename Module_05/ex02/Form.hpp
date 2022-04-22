#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form();
		Form(const std::string name, int grade_to_sign, int grade_to_execute, bool is_signed);
		Form(Form const &object);
		~Form();

		Form&	operator=(Form const &object);

		const std::string	getName(void) const;
		int					getGradeToExecute(void) const;
		int					getGradeToSign(void) const;
		bool				getSigned(void) const;

		void			beSigned(const Bureaucrat &bureaucrat);
		void			execute(const Bureaucrat &executor) const;

		class GradeTooHighException : public std::exception{
			const char *what() const throw();
		};
		class GradeTooLowException : public std::exception{
			const char *what() const throw();
		};
		class NotSignedException : public std::exception{
			const char *what() const throw();
		};
	
	protected:
		virtual void	action(void) const = 0;
	
	private:
		const std::string	_name;
		bool				_signed;
		const int			_grade_to_sign;
		const int			_grade_to_execute;
};

std::ostream&	operator<<(std::ostream &ostream, const Form &myClass);

#endif