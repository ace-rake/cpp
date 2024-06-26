#include "../main.h"

// Constructor
Animal::Animal(void)
{
	std::cout << "Animal\t:creating object\n";
	this->_type = "Animal";
}

// Copy constructor
Animal::Animal(const Animal& other)
{
	std::cout << "Animal\t:copying object\n";
	*this = other;
}

// Copy assignment operator overload
Animal& Animal::operator = (const Animal& other)
{
	std::cout << "Animal\t:copying object (assignement)\n";
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

// Destructor
Animal::~Animal(void)
{
	std::cout << "Animal\t:destroying object\n";
}

std::string	Animal::getType(void)const
{
	return (this->_type);
}

void	Animal::setType(std::string type)
{
	this->_type = type;
}

void	Animal::makeSound(void)const
{
	std::cout << "Animal\t:Generic sound" << std::endl;
}
