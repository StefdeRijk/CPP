#include "Karen.hpp"
#include <iostream>

void	Karen::complain( std::string level )
{
	if (level.empty())
	{
		std::cout << "I don't know what to say" << std::endl;
		return ;
	}

	std::string level_arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	void	(Karen::*functions_arr[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

	for (int i = 0; i < 4; i++)
	{
		if (level == level_arr[i])
		{
			void	(Karen::*selected_function)(void) = functions_arr[i];
			(this->*selected_function)();
			return ;
		}
	}
	std::cout << "I don't know what to say" << std::endl;
}

void	Karen::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!";
	std::cout << std::endl;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!";
	std::cout << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.";
	std::cout << std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
}
