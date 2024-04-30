#include "../ClassHeaders/MutantStack.hpp"
#include <iostream>

// Copy constructor
template<class T>
MutantStack<T>::MutantStack(const MutantStack& other)
{
	std::cout << "MutantStack:\tcopying object\n";
	*this = other;
}

// Copy assignment operator overload
template<class T>
MutantStack<T>& MutantStack<T>::operator = (const MutantStack& other)
{
	std::cout << "MutantStack:\tcopying object (assignment)\n";
	if (this != &other)
	{
		/* this->_=other._ */
	}
	return (*this);
}
