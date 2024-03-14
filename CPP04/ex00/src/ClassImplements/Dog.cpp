#include "../main.h"

// Constructor
Dog::Dog(void)
{
	std::cout << "Dog\t:creating object\n";
	this->type = "Dog";
}

// Copy constructor
Dog::Dog(const Dog& other)
{
	std::cout << "Dog\t:copying object\n";
	*this = other;
}

// Copy assignment operator overload
Dog& Dog::operator = (const Dog& other)
{
	std::cout << "Dog\t:copying object (assignement)\n";
	if (this != &other)
		/*this->_ = other._*/;
	return (*this);
}

// Destructor
Dog::~Dog(void)
{
	std::cout << "Dog\t:destroying object\n";
}

void	Dog::makeSound(void)const
{
	std::cout << this->getType() << "\t:Bork" << std::endl;
}
