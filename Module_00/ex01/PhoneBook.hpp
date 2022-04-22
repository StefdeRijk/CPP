#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <array>

class PhoneBook
{
	public:
		void		add(void);
		void			search(void);
		PhoneBook(void);

	private:
		Contact	contacts[8];
		int		cur_contact_index;

		unsigned int	get_first_index(Contact contacts);
		void			search_print(std::string str, int newline);
		int				ask_for_index(int contacts_len);
};

#endif
