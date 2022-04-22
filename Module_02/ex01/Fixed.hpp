#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const &object);
		Fixed(const int int_value);
		Fixed(const float float_value);
		virtual	~Fixed();

		Fixed&	operator=(Fixed const &object);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int					value;
		static const int	bits = 8;
		int					ft_pow(int value, int power) const;
};

std::ostream&	operator<<(std::ostream &ostream, const Fixed &myClass);

#endif
