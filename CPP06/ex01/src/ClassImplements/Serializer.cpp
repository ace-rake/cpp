#include "../ClassHeaders/Serializer.hpp"
#include <iostream>

// Constructor
Serializer::Serializer()
{
	std::cout << "Serializer:\tcreating object\n";
}

// Copy constructor
Serializer::Serializer(const Serializer& other)
{
	std::cout << "Serializer:\tcopying object\n";
	*this = other;
}

// Copy assignment operator overload
Serializer& Serializer::operator = (const Serializer& other)
{
	std::cout << "Serializer:\tcopying object (assignment)\n";
	if (this != &other)
	{
		/* this->_=other._ */
	}
	return (*this);
}

// Destructor
Serializer::~Serializer(void)
{
	std::cout << "Serializer:\tdestroying object\n";
}

uintptr_t	Serializer::serialize(Data * d)
{
	return (reinterpret_cast<uintptr_t>(d));
}

Data *		Serializer::deserialize(uintptr_t i)
{
	return (reinterpret_cast<Data *>(i));
}
