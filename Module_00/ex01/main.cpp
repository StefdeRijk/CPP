#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int	main(void)
{
	std::string input;
	PhoneBook	phonebook;

	while (std::cin)
	{
		getline(std::cin, input);
		if (!input.compare("ADD"))
			phonebook.add();
		else if (!input.compare("SEARCH"))
			phonebook.search();
		else if (!input.compare("EXIT"))
			return (0);
	}
	return (0);
}
