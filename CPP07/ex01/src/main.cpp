
#include <cstddef>
#include <iostream>
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
}
