#include "main.h"
# include "../../colors.h"

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

	{
		print_test("<< overload");
		Fixed number;
		number.setRawBits(500);
		std::cout << number << std::endl;
		print_test("End of test");
	}

	{
		print_test("Creating fixed number with float");
		Fixed	number(420.69f);
		std::cout << number.getRawBits() << std::endl;
		std::cout << number << std::endl;
		std::cout << number.toFloat() << std::endl;
		std::cout << number.toInt() << std::endl;

		print_test("Setting the raw bits to 1.5f");

		number.setRawBits(256 + 128);
		std::cout << number.getRawBits() << std::endl;
		std::cout << number << std::endl;
		std::cout << number.toFloat() << std::endl;
		std::cout << number.toInt() << std::endl;

		print_test("Setting the raw bits to the highest number lower than 1f");

		number.setRawBits(256 - 1);
		std::cout << number.getRawBits() << std::endl;
		std::cout << number << std::endl;
		std::cout << number.toFloat() << std::endl;
		std::cout << number.toInt() << std::endl;
		print_test("End of test");
	}
	{
		print_test("Creating fixed number with int");
		Fixed	number(20);
		std::cout << number << std::endl;
	}
}
