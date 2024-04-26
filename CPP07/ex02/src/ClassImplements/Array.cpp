#include "../ClassHeaders/Array.hpp"
#include <iostream>

// Constructor
template<class T>
Array<T>::Array()
{
	std::cout << "Array:\tcreating object\n";
}

template<class T>
Array<T>::Array(T var) : _var(var)
{
	std::cout << "Array:\tcreating object\n";
}

// Copy constructor
template<class T>
Array<T>::Array(const Array& other)
{
	std::cout << "Array:\tcopying object\n";
	*this = other;
}

// Copy assignment operator overload
template<class T>
Array<T>& Array<T>::operator = (const Array& other)
{
	std::cout << "Array:\tcopying object (assignment)\n";
	if (this != &other)
	{
		/* this->_=other._ */
	}
	return (*this);
}

// Destructor
template<class T>
Array<T>::~Array(void)
{
	std::cout << "Array:\tdestroying object\n";
}
