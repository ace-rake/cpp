#include "../ClassHeaders/B.hpp"
#include <iostream>

// Constructor
B::B()
{
	std::cout << "B:\tcreating object\n";
}

// Copy constructor
B::B(const B& other)
{
	std::cout << "B:\tcopying object\n";
	*this = other;
}

// Copy assignment operator overload
B& B::operator = (const B& other)
{
	std::cout << "B:\tcopying object (assignment)\n";
	if (this != &other)
	{
		this->_c = other._c;
	}
	return (*this);
}

// Destructor
B::~B(void)
{
	std::cout << "B:\tdestroying object\n";
}

void	B::setC(char c)
{
	_c = c;
}

void	B::printC()
{
	std::cout << _c;
}
