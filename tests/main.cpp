#include <string>
#include <iostream>
int	main(void)
{
	std::string str;

		while (std::getline(std::cin, str))
		{
			std::cout << str << std::endl;
		}
		std::cout << str << std::endl;	
}
