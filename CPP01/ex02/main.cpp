#include <string>
#include <iostream>
#include "../../colors.h"

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	print_test("String address");
	std::cout << &str << std::endl;

	print_test("Ptr address");
	std::cout<< &ptr << std::endl;

	print_test("Ref address");
	std::cout<< &ref << std::endl << std::endl;

	print_test("Str content");
	std::cout << str << std::endl;
	print_test("Ptr content");
	std::cout << ptr << std::endl;
	print_test("Ref content");
	std::cout << ref << std::endl << std::endl;
}
