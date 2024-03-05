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
		std::cout << "fuck you\n";
		return (0);
	}


	std::string file = static_cast<std::string>(argv[1]);
	std::ifstream input(file);
	if (!input.is_open())
	{
		std::cout << "cant open " << file << std::endl;
		return (0);
	}

	std::ofstream output(file + ".replace");
	if (!output.is_open())
	{
		std::cout << "cant open " << file << ".replace" << std::endl;
		return (0);
	}
	
	std::string line;
	while (std::getline(input, line))
	{
		if (!line.compare(static_cast<std::string>(argv[2])))
			line = static_cast<std::string>(argv[3]);
		output << line << std::endl;
	}
	
	input.close();
	output.close();
}
