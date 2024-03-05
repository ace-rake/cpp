#include "phonebook.hpp"
#include <sstream>
#include <stdlib.h>

void PhoneBook::add_contact(){
	this->contacts[(this->nnc)].get_info();
	this->nnc = (this->nnc + 1) % 8;
}

void PhoneBook::print_nnc()
{
	std::cout << "next new contact " << this->nnc << std::endl;
}

PhoneBook::PhoneBook()
{
	this->nnc = 0;
}

void PhoneBook::search(){
	std::cout << "     index| firstname|  lastname|      nick" << std::endl;
	for (int i = 0; i < 8; ++i)
	{
		std::cout << "         " << i + 1 << "|";
		this->contacts[i].print_info_small();
	}

	std::string input;

	while (1)
	{
		std::cout << "please choose a number between 1 and 8" << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
			return (exit(69), void());
		std::stringstream stream( input );
		int number;
		if (stream >> number && (1 <= number && number <= 8))
		{
			this->contacts[number - 1].print_info();
			return ;	
		}
	}
}
