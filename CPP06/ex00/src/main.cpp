#include "ClassHeaders/ScalarConverter.hpp"
#include <cstdio>
#include <iostream>
#include <string>
int main(void)
{
	std::string input;

	while (!std::cin.eof())
	{
		std::cout << "\nInput :";
		std::cin >> input;
		std::cout << input << std::endl;
		ScalarConverter::convert(input);
		/* ScalarConverter::printInfo(input); */
	}
}
