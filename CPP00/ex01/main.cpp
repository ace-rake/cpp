#include <iostream>
#include "Contact.hpp"
#include "phonebook.hpp"
#include <csignal>

int	main(){

	std::string input;
	PhoneBook book;
	std::cout << "Welcome to your very own phonebook™" <<  std::endl;
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
			return (0);
	}
}
