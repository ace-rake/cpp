#include "../ClassHeaders/A.hpp"
#include <iostream>

// Constructor
A::A()
{
	std::cout << "A:\tcreating object\n";
}
A::A(int i) : _i(i)
{
	std::cout << "A:\tcreating object\n";
}

// Copy constructor
A::A(const A& other)
{
	std::cout << "A:\tcopying object\n";
	*this = other;
}

// Copy assignment operator overload
A& A::operator = (const A& other)
{
	std::cout << "A:\tcopying object (assignment)\n";
	if (this != &other)
	{
		this->_i = other._i;
	}
	return (*this);
}

// Destructor
A::~A(void)
{
	std::cout << "A:\tdestroying object\n";
}

void	A::incrementI()
{
	_i++;
}
