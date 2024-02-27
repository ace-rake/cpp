#include <iostream>
#include "Contact.hpp"
#include "phonebook.hpp"



int	main(){
	std::string input;
	PhoneBook book;
	while(1)
	{
		std::cout << "Options:\n\tADD\n\tSEARCH\n\tEXIT" << std::endl;
		std::getline(std::cin, input);
		if (input.compare("ADD") == 0)
		{
			book.print_nnc();
			book.add_contact();
		}
		if (input.compare("SEARCH") == 0)
			book.search();
		if (input.compare("EXIT") == 0)
			return(0);
	}
	

	/*
	Contact contact;
	contact.get_info();
	contact.print_info();
	Contact wolo;
	wolo.print_info();
	*/
}
