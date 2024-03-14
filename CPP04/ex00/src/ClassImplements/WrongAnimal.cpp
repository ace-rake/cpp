#include "../main.h"

// Constructor
WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal: creating object\n";
}

// Copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "WrongAnimal: copying object\n";
	*this = other;
}

// Copy assignment operator overload
WrongAnimal& WrongAnimal::operator = (const WrongAnimal& other)
{
	std::cout << "WrongAnimal: copying object (assignement)\n";
	if (this != &other)
		this->type = other.type;
	return (*this);
}

// Destructor
WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal: destroying object\n";
}

std::string	WrongAnimal::getType(void)const
{
	return (this->type);
}

void	WrongAnimal::setType(std::string type)
{
	this->type = type;
}

void	WrongAnimal::makeSound(void)const
{
	std::cout << "Animal\t:Generic sound" << std::endl;
}
