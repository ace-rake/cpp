#include "phonebook.hpp"
#include <sstream>

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
	std::cout << "please choose a number between 1 and 8" << std::endl;
	std::getline(std::cin, input);
	std::stringstream stream( input );
	int number;
	if (stream >> number && (1 <= number && number <= 8))
		this->contacts[number - 1].print_info();
	else
		std::cout << "fuck you\n";
}
