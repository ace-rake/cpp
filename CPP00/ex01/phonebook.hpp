#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <iostream>
class PhoneBook
{
	private:
		Contact contacts[8];
		int nnc;

	public:
		PhoneBook();
		void add_contact();
		void print_nnc();
		void search();
};
#endif
