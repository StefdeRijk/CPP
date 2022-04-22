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

		bool 	operator>(const Fixed &object) const;
		bool 	operator>=(const Fixed &object) const;
		bool 	operator<(const Fixed &object) const;
		bool 	operator<=(const Fixed &object) const;
		bool 	operator==(const Fixed &object) const;
		bool 	operator!=(const Fixed &object) const;

		Fixed	operator+(const Fixed &object) const;
		Fixed	operator-(const Fixed &object) const;
		Fixed	operator*(const Fixed &object) const;
		Fixed	operator/(const Fixed &object) const;

		Fixed&	operator++(void);
		Fixed	operator++(int);
		Fixed&	operator--(void);
		Fixed	operator--(int);

		int		getRawBits(void) const;
		void	setRawBits(int const raw) const;
		float	toFloat(void) const;
		int		toInt(void) const;

		static Fixed		&min(Fixed &object1, Fixed &object2);
		static const Fixed	&min(Fixed const &object1, Fixed const &object2);
		static Fixed		&max(Fixed &object1, Fixed &object2);
		static const Fixed	&max(Fixed const &object1, Fixed const &object2);

	private:
		mutable int			value;
		static const int	bits = 8;

		int					ft_pow(int value, int power) const;
};

std::ostream&	operator<<(std::ostream &ostream, const Fixed &myClass);

#endif
