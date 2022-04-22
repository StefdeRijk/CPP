#include <iostream>
#include <iomanip>
#include <limits>
#include <float.h>
#include <cmath>

static int	error(const char *str)
{
	std::cout << str << std::endl;
	exit(1);
}

static char	get_type(char *arg)
{
	std::string			arg_str;

	arg_str = arg;
	if (!arg_str.compare("-inff") || !arg_str.compare("inff") || !arg_str.compare("nanf"))
		return ('f');
	if (!arg_str.compare("-inf") || !arg_str.compare("inf") || !arg_str.compare("nan"))
		return ('d');

	if (arg_str.find('.') != std::string::npos)
	{
		if (arg_str.find('f') != std::string::npos)
			return ('f');
		else
			return ('d');
	}

	if (arg_str.size() == 1 && !std::isdigit(arg_str[0]))
		return ('c');

	for (unsigned long i = 0; i < arg_str.size(); i++)
	{
		if (!std::isdigit(arg_str[i]))
			error("Could not convert string");
	}
	return ('i');
}

static char	convert_char(char *arg)
{
	return (arg[0]);
}

static long	convert_int(char *arg)
{
	char	*end;
	long	i;

	i = std::strtol(arg, &end, 10);
	if (i > INT_MAX || i < INT_MIN || i == LONG_MAX || i == LONG_MIN)
		error("Overflow found!");
	return (i);
}

static double	convert_float(char *arg)
{
	char	*end;
	double	i;

	i = std::strtod(arg, &end);
	if (i > FLT_MAX || i < -FLT_MIN || i == HUGE_VAL)
		error("Overflow found!");
	return (i);
}

static double	convert_double(char *arg)
{
	char	*end;
	double	i;

	i = std::strtod(arg, &end);
	if (i == HUGE_VAL)
		error("Overflow found!");
	return (i);
}

template <typename T> void	print_char(T type)
{
	std::cout << "char: ";
	if (!isprint(type))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(type) << "'" << std::endl;
}

template <typename T> void	print_int(T type)
{
	std::cout << "int: ";
	if (type > INT_MAX || type < INT_MIN)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(type) << std::endl;
}

template <typename T> void	print_float(T type)
{
	std::cout << "float: ";
	if (type > FLT_MAX || type < -FLT_MAX)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<float>(type) << "f" << std::endl;
}

template <typename T> void	print_double(T type)
{
	std::cout << "double: " << static_cast<double>(type) << std::endl;
}

template <typename T> void	print_types(T type)
{
	print_char(type);
	print_int(type);
	print_float(type);
	print_double(type);
}

static int	convert_type(char *arg, char type)
{
	char		c;
	long		i;
	double		f;
	double		d;

	if (type == 'c')
	{
		c = convert_char(arg);
		print_types(c);
	}
	else if (type == 'i')
	{
		i = convert_int(arg);
		print_types(i);
	}
	else if (type == 'f')
	{
		f = convert_float(arg);
		print_types(f);
	}
	else if (type == 'd')
	{
		d = convert_double(arg);
		print_types(d);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (error("Program only accepts one argument"));

	if (!strcmp(argv[1], "nan") || !strcmp(argv[1], "+inf") || !strcmp(argv[1], "-inf"))
	{
		std::cout << "char: impossible\nint: impossible\nfloat: " << argv[1] << "f\ndouble: " << argv[1] << std::endl;
		return (0);
	}
	if (!strcmp(argv[1], "nanf") || !strcmp(argv[1], "+inff") || !strcmp(argv[1], "-inff"))
	{
		std::string	str = argv[1];
		std::cout << "char: impossible\nint: impossible\nfloat: " << argv[1] << "\ndouble: " << str.substr(0, str.size() - 1) << std::endl;
		return (0);
	}

	std::cout << std::showpoint;
	std::cout <<std::setprecision(1) << std::fixed;

	char	type = get_type(argv[1]);
	return (convert_type(argv[1], type));
}
