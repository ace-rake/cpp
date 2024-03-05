#include "main.h"
# include "../../../colors.h"

// 
int    main(void)
{
	{
		print_test("Creating fixed number and setting raw bits");
		Fixed	number;
		std::cout << number.getRawBits() << std::endl;
		number.setRawBits(69);
		std::cout << number.getRawBits() << std::endl;
		print_test("End of test");
	}

	{
		print_test("Copy constructor");
		Fixed	number;
		number.setRawBits(69);
		Fixed	numba(	number	);
		std::cout << numba.getRawBits() << std::endl;
		numba.setRawBits(420);
		std::cout << numba.getRawBits() << std::endl;
		std::cout << number.getRawBits() << std::endl;
		print_test("End of test");
	}

	{
		print_test("Copy assignment");
		Fixed	number;
		number.setRawBits(69);
		Fixed fuck;
		fuck = number;
		std::cout << fuck.getRawBits() << std::endl;
		fuck.setRawBits(420);
		std::cout << fuck.getRawBits() << std::endl;
		std::cout << number.getRawBits() << std::endl;
		print_test("End of test");
	}
}
