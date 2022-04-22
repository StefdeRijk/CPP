#include "Karen.hpp"
#include <iostream>

int	get_level(std::string level_str)
{
	if (level_str == "DEBUG")
		return (1);
	else if (level_str == "INFO")
		return (2);
	else if (level_str == "WARNING")
		return (3);
	else if (level_str == "ERROR")
		return (4);
	return (-1);
}

int	main(int argc, char **argv)
{
	Karen		karen;
	std::string	level_str;
	int			level;

	if (argc != 2)
	{
		std::cout << "This program takes exactly 1 argument" << std::endl;
		return (1);
	}
	level_str = argv[1];
	level = get_level(level_str);
	switch (level)
	{
		case 1:
			std::cout << "[ DEBUG ]" << std::endl;
			karen.complain(level_str);
			std::cout << std::endl;
			level_str = "INFO";
			level++;
		case 2:
			std::cout << "[ INFO ]" << std::endl;
			karen.complain(level_str);
			std::cout << std::endl;
			level_str = "WARNING";
			level++;
		case 3:
			std::cout << "[ WARNING]" << std::endl;
			karen.complain(level_str);
			std::cout << std::endl;
			level_str = "ERROR";
			level++;
		case 4:
			std::cout << "[ ERROR ]" << std::endl;
			karen.complain(level_str);
			std::cout << std::endl;
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
