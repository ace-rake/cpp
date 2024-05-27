#include "ClassHeaders/Btc.hpp"
#include <exception>
#include <fstream>
#include <regex>
#include <unistd.h>

bool check_line(const std::string& str) {
    // Define the regex pattern
    std::regex pattern(R"(^\d{4}-\d{2}-\d{2} \| .+$)");

    // Use regex_match to check if the string matches the pattern
    return std::regex_match(str, pattern);
}
int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	std::string file = "data.csv";

	std::ifstream input(argv[1]);
	if (!input.is_open())
	{
		std::cout << "cant open " << argv[1] << std::endl;
		return (0);
	}
	std::string line;

	while (std::getline(input, line))
	{
		std::cout << "checking :" <<line<<std::endl;
		std::cout << "Check line :" << check_line(line) << std::endl;
		try
		{
			Btc coin;
			std::cout << coin.retrieve(line) << std::endl << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}
