#include <string>
#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << "Str address " << &str << std::endl;
	std::cout << "Ptr content " << &ptr << std::endl;
	std::cout << "Ref content " << &ref << std::endl << std::endl;

	std::cout << "Str content " << str << std::endl;
	std::cout << "Ptr dereference " << ptr << std::endl;
	std::cout << "Ref content " << ref << std::endl << std::endl;
}
