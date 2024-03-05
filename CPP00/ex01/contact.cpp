#include "Contact.hpp"
#include <string>
#include <iostream>
#include <sstream>
#include <stdlib.h>

Contact::Contact(){
	this->number = 0;
	this->first_name = "N/A";
	this->last_name = "N/A";
	this->nick_name = "N/A";
	this->secret = "N/A";
}

std::string	Contact::get_field(std::string prompt , int force_number)
{
	std::string input;
	std::cout << prompt << std::endl;
	while (std::getline(std::cin, input))
	{
		if (!input.empty())
			return (input);
		std::cout << prompt << std::endl;
	}
	if (!std::cin)
		exit(0);
	(void)force_number;
	return (input);
}

void	Contact::get_info(){
	this->first_name = get_field("Please give a first name\n", 0);
	
	this->last_name = get_field("Please give a last name\n", 0);

	this->nick_name = get_field("Please give a nick name\n", 0);

	std::stringstream stream ( get_field("Please give a number\n", 1));
	int number;
	if (stream >> number)
		this->number = number;

	this->secret = get_field("Please give a secret\n", 0);
}

std::string Contact::trunc(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	else if (str.length() == 10)
		return (str);
	else
	{
		std::string padding;
		for (unsigned long i = 0; i < 10 - str.length(); i++)
			padding += " ";
		return (padding + str);
	}
}

void Contact::print_info_small()
{
	std::cout << trunc(this->first_name) << "|";
	std::cout << trunc(this->last_name) << "|";
	std::cout << trunc(this->nick_name) << std::endl;
}
void Contact::print_info()
{
	std::cout << "First Name: [" << this->first_name << "]" << std::endl;
	std::cout << "Last Name: ["  << this->last_name << "]"  << std::endl;
	std::cout << "Nick Name: ["  << this->nick_name << "]"  << std::endl;
	std::cout << "Number: ["  << this->number << "]"  << std::endl;
	std::cout << "Secret: ["  << this->secret << "]"  << std::endl;
}
