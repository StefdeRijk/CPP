#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed &object);
		virtual	~Fixed();

		Fixed&	operator=(Fixed &object);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int					value;
		static const int	bits = 8;
};

#endif
