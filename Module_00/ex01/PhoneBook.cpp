#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void): cur_contact_index(0)
{
}

void PhoneBook::add(void)
{
	Contact			contact;

	std::cout << "Please enter first name\n";
	getline(std::cin, contact.first_name);
	std::cout << "Please enter last name\n";
	getline(std::cin, contact.last_name);
	std::cout << "Please enter nickname\n";
	getline(std::cin, contact.nickname);
	std::cout << "Please enter phone number\n";
	getline(std::cin, contact.phone_number);
	std::cout << "Please enter darkest secret\n";
	getline(std::cin, contact.darkest_secret);
	if (this->cur_contact_index == 8)
		this->cur_contact_index = 0;
	contact.index = cur_contact_index;
	this->contacts[cur_contact_index] = contact;
	this->cur_contact_index++;
}

void	PhoneBook::search_print(std::string str, int newline)
{
	if (str.size() < 10)
	{
		std::cout << std::setw(10);
		std::cout << str;
	}
	else
	{
		std::cout << std::setw(9);
		std::cout << str.substr(0, 9) << ".";
	}
	if (!newline)
		std::cout << "|";
	else
		std::cout << std::endl;
}

int	PhoneBook::ask_for_index(int contacts_len)
{
	int	index;

	index = -1;
	std::cout << "Please enter contact index" << std::endl;
	std::cin >> index;
	if (std::cin.fail())
	{
		if (!std::cin && index == -1)
			exit(1);
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Index is not a number" << std::endl << std::endl;
		return (ask_for_index(contacts_len));
	}
	if (index < 0 || index > contacts_len)
	{
		std::cout << "Index is out of range" << std::endl << std::endl;
		return (ask_for_index(contacts_len));
	}
	return (index);
}

void PhoneBook::search()
{
	int	contacts_len;
	int	index;

	contacts_len = 7;
	if (!this->contacts[0].first_name[0])
	{
		std::cout << "No contacts added yet" << std::endl;
		return ;
	}
	for (int i = 0; i < 8; i++)
	{
		if (!this->contacts[i].first_name[0])
		{
			contacts_len = i - 1;
			break ;
		}
		std::cout << std::setw(10);
		std::cout << this->contacts[i].index << "|";
		this->search_print(this->contacts[i].first_name, 0);
		this->search_print(this->contacts[i].last_name, 0);
		this->search_print(this->contacts[i].nickname, 1);
	}
	index = ask_for_index(contacts_len);
	std::cout << "index:	" << this->contacts[index].index << std::endl;
	std::cout << "first name:	" << this->contacts[index].first_name << std::endl;
	std::cout << "last name:	" << this->contacts[index].last_name << std::endl;
	std::cout << "nickname:	" << this->contacts[index].nickname << std::endl;
	std::cout << "phone number:	" << this->contacts[index].phone_number << std::endl;
	std::cout << "darkest secret:	" << this->contacts[index].darkest_secret << std::endl;
}
