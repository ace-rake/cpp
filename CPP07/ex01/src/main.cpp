
#include <cstddef>
#include <iostream>
#include <string>
#include "ClassHeaders/A.hpp"
#include "ClassHeaders/B.hpp"
template<typename T, typename Func>
void	iter(T arr, size_t n, Func func)
{
	for (size_t t = 0; t < n; ++t)
		(arr[t].*func)();
}

int main(void)
{
	size_t n = 5;
	A *a = new A[n];

	for (size_t t = 0; t < n; ++t)
		a[t].setI(t);
	for (size_t t = 0; t < n; ++t)
		std::cout << a[t].getI() << std::endl;
	iter(a, n, &A::incrementI);
	for (size_t t = 0; t < n; ++t)
		std::cout << a[t].getI() << std::endl;

	delete[] a;

	B *b = new B[n];
	for (size_t t = 0; t < n; ++t)
		b[t].setC('a' + t);
	iter(b, n, &B::printC);

	delete[] b;

	std::string *test = new std::string[n];
	for (size_t t = 0; t < n; ++t)
		test[t] = 65 + t; 
	std::cout << "pre\n";
	for (size_t t = 0; t < n; ++t)
		std::cout << test[t]; 
	std::cout << std::endl;
	iter(test, n, &std::string::clear);
	std::cout << "after\n";
	for (size_t t = 0; t < n; ++t)
		std::cout << test[t]; 
	std::cout << std::endl;
	delete[] test;
}
