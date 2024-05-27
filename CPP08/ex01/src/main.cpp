#include "ClassHeaders/Span.hpp"
#include <iostream>
#include <vector>
/* int main() */
/* { */
/* Span sp = Span(5); */
/* sp.addNumber(6); */
/* sp.addNumber(3); */
/* sp.addNumber(17); */
/* sp.addNumber(9); */
/* sp.addNumber(11); */
/* std::cout << sp.shortestSpan() << std::endl; */
/* std::cout << sp.longestSpan() << std::endl; */
/* return 0; */
/* } */
int	main(void)
{
	Span span(20);
	std::list<int> numbers = {10, 10, 30, 40, 50};


	try {
	span.shortestSpan();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
	span.longestSpan();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}


	span.addNumberIt(numbers.begin(), numbers.end());

	try{
	for (int i = 0; i < 5; ++i)
		span.addNumber(i);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "longest\t\t: " << span.longestSpan() << std::endl;
	std::cout << "shortest\t: " << span.shortestSpan() << std::endl;

	span.addNumber(1);
	span.addNumber(9999);

	std::cout << "longest\t\t: " << span.longestSpan() << std::endl;
	std::cout << "shortest\t: " << span.shortestSpan() << std::endl;
	try 
	{
		for (int i = 0; i < 999; ++i)
			span.addNumber(i);
	}
	catch(Span::overflow &e)
	{
		std::cout << e.what() << std::endl;
	}
}
