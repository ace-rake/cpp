#include "../main.h"

// Constructor
Animal::Animal(void)
{
	std::cout << "Animal\t:creating object\n";
	this->type = "Animal";
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
		this->type = other.type;
	return (*this);
}

// Destructor
Animal::~Animal(void)
{
	std::cout << "Animal\t:destroying object\n";
}

std::string	Animal::getType(void)const
{
	return (this->type);
}

void	Animal::setType(std::string type)
{
	this->type = type;
}

void	Animal::makeSound(void)const
{
	std::cout << "Animal\t:Generic sound" << std::endl;
}
