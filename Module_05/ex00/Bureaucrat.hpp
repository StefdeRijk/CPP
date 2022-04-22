#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <exception>

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(Bureaucrat const &object);
		~Bureaucrat();

		Bureaucrat&	operator=(Bureaucrat const &object);

		const std::string	getName(void) const;
		int					getGrade(void) const;
		void				setGrade(int new_grade);

		void	incrementGrade(void);
		void	decrementGrade(void);

		class GradeTooHighException : public std::exception{
			const char *what() const throw();
		};
		class GradeTooLowException : public std::exception{
			const char *what() const throw();
		};
	
	private:
		const std::string	_name;
		int					_grade;
};

std::ostream&	operator<<(std::ostream &ostream, const Bureaucrat &myClass);

#endif