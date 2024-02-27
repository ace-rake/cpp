#include "Contact.hpp"
#include <string>
#include <iostream>
#include <sstream>

Contact::Contact(){
}

void	Contact::get_info(){
	std::cout << "Please give a first name" << std::endl;
	std::getline(std::cin, this->first_name);
	std::cout << "Please give a last name" << std::endl;
	std::getline(std::cin, this->last_name);
	std::cout << "Please give a nick name" << std::endl;
	std::getline(std::cin, this->nick_name);
	std::cout << "Please give a number" << std::endl;

	std::string input;
	std::getline(std::cin, input);
	std::stringstream stream(input);
	stream >> this->number;
	std::cout << "Please give a secret" << std::endl;
	std::getline(std::cin, this->secret);
}

std::string trunc(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	else if (str.length() == 10)
		return (str);
	else
	{
		std::string padding;
		for (int i = 0; i < 10 - str.length(); i++)
			padding += " ";
		return (padding + str);
	}
}

void Contact::print_info_small(){
	std::cout << trunc(this->first_name) << "|";
	std::cout << trunc(this->last_name) << "|";
	std::cout << trunc(this->nick_name) << std::endl;
}
void Contact::print_info(){
	std::cout << this->first_name << std::endl;
	std::cout << this->last_name << std::endl;
	std::cout << this->nick_name << std::endl;
	std::cout << this->number << std::endl;
	std::cout << this->secret << std::endl;
}
