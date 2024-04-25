#include "ClassHeaders/A.hpp"
#include "ClassHeaders/B.hpp"
#include "ClassHeaders/C.hpp"
#include "ClassHeaders/Base.hpp"
#include <cstdlib>
#include <ctime>
#include <exception>
#include <iostream>
#include <unistd.h>

void identify(Base* p)
{
	if (dynamic_cast< A *>(p))
		std::cout << "this be A" << std::endl;
	else if (dynamic_cast< B *>(p))
		std::cout << "this be B" << std::endl;
	else if (dynamic_cast< C *>(p))
		std::cout << "this be C" << std::endl;
	else
		std::cout << "the fuck is this ?\n";
}

void identify(Base& p)
{
	try {
		A& a = dynamic_cast<A&>(p);
		std::cout << "this be A" << std::endl;
		(void)a;
	}
	catch(std::exception &e){}
	try {
		B& b = dynamic_cast<B&>(p);
		std::cout << "this be B" << std::endl;
		(void)b;
	}
	catch(std::exception &e){}
	try {
		C& c = dynamic_cast<C&>(p);
		std::cout << "this be C" << std::endl;
		(void)c;
	}
	catch(std::exception &e){}
}

Base * generate(void)
{
	int r = std::rand();
	if (r % 3 == 0)
	{
		/* std::cout << "creating a\n"; */
		return new A();
	}
	if (r % 3 == 1)
	{
		/* std::cout << "creating b\n"; */
		return new B();
	}
	/* std::cout << "creating c\n"; */
	return new C();
}

int	main(void)
{
	while (1)
	{
		Base *test = generate();
		identify(test);
		identify(*test);
		usleep(500000);
	}
}
