#include "ClassHeaders/Btc.hpp"
#include <exception>
#include <unistd.h>
int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	std::string file = "../../data.csv";

	Date date("2014-11-26");

	try{
		Btc coin(argv[1]);
		/* coin.printData(); */
		while (1)
		{
			std::cout << coin.retrieve(++date) << std::endl;
			sleep(1);
		}

	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
