#include "ClassHeaders/Span.hpp"
#include <iostream>
int	main(void)
{
	Span span(7);

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



	for (int i = 0; i < 5; ++i)
		span.addNumber(i);

	std::cout << span.longestSpan() << std::endl;
	std::cout << span.shortestSpan() << std::endl;

	span.addNumber(1);
	span.addNumber(9999);

	std::cout << span.longestSpan() << std::endl;
	std::cout << span.shortestSpan() << std::endl;
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
