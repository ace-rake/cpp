#include <iostream>
#include "../../../colors.h"
#include "main.h"
template<typename T>
void	swap(T & a, T & b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T	min(const T a, const T b)
{
	if ( a < b )
		return a;
	return b;
}

template<typename T>
T	max(const T a, const T b)
{
	if ( a > b )
		return a;
	return b;
}

int main(void)
{
	print_test("Base values");
	int a = 2;
	int b = 3;
	std::cout << "a = " << a << ", b = " << b << std::endl;

	print_test("Swap");
	swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;

	print_test("min/max");
	std::cout << "min( a, b ) = " << min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << max( a, b ) << std::endl;


	print_test("Base values");
	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "c = " << c << ", d = " << d << std::endl;

	print_test("Swap");
	swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;

	print_test("min/max");
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}
