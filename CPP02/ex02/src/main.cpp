#include "main.h"
# include "../../colors.h"


void	equals_test(Fixed& a, Fixed& b)
{
	if (a == b)
		std::cout << a <<" equals " << b << std::endl;
	else
		std::cout << a <<" does not equals " << b << std::endl;
}
void	bigger_test(Fixed& a, Fixed& b)
{
	if (a > b)
		std::cout << a <<" is bigger than " << b << std::endl;
	else
		std::cout << a <<" is not bigger than " << b << std::endl;
}
void	bigger_eq_test(Fixed& a, Fixed& b)
{
	if (a >= b)
		std::cout << a <<" is bigger than or eq to " << b << std::endl;
	else
		std::cout << a <<" is not bigger than or eq to " << b << std::endl;
}
void	smaller_test(Fixed& a, Fixed& b)
{
	if (a < b)
		std::cout << a <<" is smaller than " << b << std::endl;
	else
		std::cout << a <<" is not smaller than " << b << std::endl;
}
void	smaller_eq_test(Fixed& a, Fixed& b)
{
	if (a <= b)
		std::cout << a <<" is smaller than or eq to " << b << std::endl;
	else
		std::cout << a <<" is not smaller than or eq to " << b << std::endl;
}
void	min_test(Fixed& a, Fixed& b)
{
	std::cout << "From given Fixed " << a << " : " << b << ". " << Fixed::min(a,b) << " is the min" << std::endl;
}

void	max_test(Fixed& a, Fixed& b)
{
	std::cout << "From given Fixed " << a << " : " << b << ". " << Fixed::max(a,b) << " is the max" << std::endl;
}

void	max_test(const Fixed& a, const Fixed& b)
{
	std::cout << "From given Fixed " << a << " : " << b << ". " << Fixed::max(a,b) << " is the max" << std::endl;
}

void	min_test(const Fixed& a, const Fixed& b)
{
	std::cout << "From given Fixed " << a << " : " << b << ". " << Fixed::min(a,b) << " is the min" << std::endl;
}

int    main(void)
{
/*
 *    print_test("Starting tests\n");
 *    print_test("Creating fixed number and setting raw bits");
 *    {
 *        Fixed	number;
 *        std::cout << number.getRawBits() << std::endl;
 *        number.setRawBits(69);
 *        std::cout << number.getRawBits() << std::endl;
 *    }
 *    print_test("End of test\n");
 *
 *    print_test("Copy constructor");
 *    {
 *        Fixed	number;
 *        number.setRawBits(69);
 *        Fixed	numba(	number	);
 *        std::cout << numba.getRawBits() << std::endl;
 *        numba.setRawBits(420);
 *        std::cout << numba.getRawBits() << std::endl;
 *        std::cout << number.getRawBits() << std::endl;
 *    }
 *    print_test("End of test\n");
 *
 *    print_test("Copy assignment");
 *    {
 *        Fixed	number;
 *        number.setRawBits(69);
 *        Fixed fuck;
 *        fuck = number;
 *        std::cout << fuck.getRawBits() << std::endl;
 *        fuck.setRawBits(420);
 *        std::cout << fuck.getRawBits() << std::endl;
 *        std::cout << number.getRawBits() << std::endl;
 *    }
 *    print_test("End of test\n");
 *
 *    print_test("<< overload");
 *    {
 *        Fixed number;
 *        std::cout << number << std::endl;
 *    }
 *    print_test("End of test\n");
 *
 *    {
 *        print_test("Creating fixed number with float");
 *        Fixed	number(420.69f);
 *        std::cout << number.getRawBits() << std::endl;
 *        std::cout << number << std::endl;
 *        std::cout << number.toFloat() << std::endl;
 *        std::cout << number.toInt() << std::endl;
 *        print_test("Setting the raw bits to 1.5");
 *        number.setRawBits(256 + 128);
 *        std::cout << number.getRawBits() << std::endl;
 *        std::cout << number << std::endl;
 *        std::cout << number.toFloat() << std::endl;
 *        std::cout << number.toInt() << std::endl;
 *        print_test("Setting the raw bits to the highest number lower than 1");
 *        number.setRawBits(256 - 1);
 *        std::cout << number.getRawBits() << std::endl;
 *        std::cout << number << std::endl;
 *        std::cout << number.toFloat() << std::endl;
 *        std::cout << number.toInt() << std::endl;
 *    }
 *    print_test("End of test\n");
 *
 */
	print_test("Starting to test comparison overloading");
	{

		print_test("Creating some value to work with");
		Fixed a(6.0f);
		Fixed b(6.0f);
		Fixed c;
		c.setRawBits(6*256);
		Fixed d;
		d.setRawBits(6);
		Fixed e(5.5f);
		Fixed f(5);
		f.setRawBits(5);

		print_test("Equals overloading");
		equals_test(a, b);
		equals_test(c, b);
		equals_test(c, d);

		print_test("Bigger than");
		bigger_test(a, b);
		bigger_test(c, b);
		bigger_test(c, d);
		bigger_test(d, c);

		print_test("Smaller than");
		smaller_test(a, b);
		smaller_test(c, b);
		smaller_test(c, d);
		smaller_test(d, c);

		print_test("Bigger or eq");
		bigger_eq_test(a, b);
		bigger_eq_test(c, b);
		bigger_eq_test(c, d);
		bigger_eq_test(d, c);

	}
	print_test("End of test\n");

	print_test("Starting arithmetic overloading");
	{ 

		print_test("Creating some value to work with");
		Fixed a(6.0f);
		Fixed b(6.0f);
		Fixed c;
		c.setRawBits(6*256);
		Fixed d;
		d.setRawBits(6);
		Fixed e(5.5f);
		Fixed f(5);
		f.setRawBits(5);

		print_test("Multiply");
		std::cout << a << " * " << b << " = " << a * b << std::endl;
		std::cout << b << " * " << d << " = " << b * d << std::endl;
		std::cout << f << " * " << d << " = " << f * d << std::endl;

		print_test("Divide");
		std::cout << a << " / " << b << " = " << a / b << std::endl;
		std::cout << b << " / " << d << " = " << b / d << std::endl;
		std::cout << f << " / " << d << " = " << f / d << std::endl;

		print_test("Divide by zero");
		Fixed zero;
		std::cout << a << " / " << zero << " = " << f / zero << std::endl;
		std::cout << zero << std::endl;

		print_test("Add");
		std::cout << a << " + " << b << " = " << a + b << std::endl;
		std::cout << b << " + " << d << " = " << b + d << std::endl;
		std::cout << f << " + " << d << " = " << f + d << std::endl;

		print_test("Subtract");
		std::cout << a << " - " << b << " = " << a - b << std::endl;
		std::cout << b << " - " << d << " = " << b - d << std::endl;
		std::cout << f << " - " << d << " = " << f - d << std::endl;
	}
	print_test("End of arithmetic overloading\n");

	print_test("Start of in/decrement operators");
	{
		Fixed a(5.0f);
		print_test("Pre increment");
		std::cout << a << " : " << ++a  << " : " << a << std::endl;
		std::cout << a << " : " << ++a  << " : " << a << std::endl;

		print_test("Post increment");
		std::cout << a << " : " << a++ << " : " << a << std::endl;
		std::cout << a << " : " << a++ << " : " << a << std::endl;

		print_test("Pre decrement");
		std::cout << a << " : " << --a << " : " << a << std::endl;
		std::cout << a << " : " << --a << " : " << a << std::endl;

		print_test("Post decrement");
		std::cout << a << " : " << a-- << " : " << a << std::endl;
		std::cout << a << " : " << a-- << " : " << a << std::endl;

	}
	print_test("End of in/decrement operators\n");

	print_test("Start of min/max test");
	{
		Fixed a(6.0f);
		Fixed b(6.0f);
		Fixed c;
		c.setRawBits(6*256);
		Fixed d;
		d.setRawBits(6);
		min_test(a,b);
		min_test(c,d);
		min_test(a,a);
		max_test(a,b);
		max_test(c,d);
		max_test(a,a);

		const Fixed e(5.0f);
		const Fixed f(6.0f);
		const Fixed g(5);
		((Fixed)g).setRawBits(5);
		const Fixed h(6);
		((Fixed)h).setRawBits(5);
		min_test(e,f);
		min_test(g,h);
		min_test(f,f);
		max_test(e,f);
		max_test(g,h);
		max_test(f,a);
	}
	print_test("End of min/max test");
}
