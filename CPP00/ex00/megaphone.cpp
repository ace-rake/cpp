#include <iostream>
#include <cctype>
#include <cstring>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i = 1; i < argc; ++i)
			for (unsigned long j = 0; j < strlen(argv[i]); j++)
				std::cout << static_cast<char>(toupper(argv[i][j]));
	std::cout << std::endl;	
}
	
