/*
 *Create a program that takes three parameters in the following order: a filename and
 *two strings, s1 and s2.
 *
 *It will open the file <filename> and copies its content into a new file
 *<filename>.replace,
 *replacing every occurrence of s1 with s2.
 *
 *Using C file manipulation functions is forbidden and will be considered cheating.
 *All the member functions of the class std::string are allowed, except replace.
 *Use them wisely!
 *
 *Of course, handle unexpected inputs and errors.
 *You have to create and turn in your own tests to ensure your program works as expected.
 */

#include <iostream>
#include <fstream>

int    main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Incorrect amount of arguments" << std::endl;
		return (0);
	}

	std::ifstream input(argv[1]);
	if (!input.is_open())
	{
		std::cout << "cant open " << argv[1] << std::endl;
		return (0);
	}

	std::ofstream output(static_cast<std::string>(argv[1]) + ".replace");
	if (!output.is_open())
	{
		std::cout << "cant open " << argv[1] << ".replace" << std::endl;
		return (0);
	}
	
	std::string line;
	std::string new_line;
	std::string from(argv[2]);
	std::string to(argv[3]);
	size_t pos;
	while (std::getline(input, line))
	{
		pos = 0;
		while ((pos = line.find(from, pos)) != std::string::npos)
		{
			line = line.substr(0, pos) + to + line.substr(pos + from.length(), std::string::npos);
			pos += to.length();
		}
		output << line << std::endl;
	}

	input.close();
	output.close();
}
