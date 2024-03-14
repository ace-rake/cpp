#include "../main.h"

// Constructor
WrongCat::WrongCat(void)
{
	std::cout << "WrongCat: creating object\n";
	this->setType("WrongCat");
}

// Copy constructor
WrongCat::WrongCat(const WrongCat& other)
{
	std::cout << "WrongCat: copying object\n";
	*this = other;
}

// Copy assignment operator overload
WrongCat& WrongCat::operator = (const WrongCat& other)
{
	std::cout << "WrongCat: copying object (assignement)\n";
	if (this != &other)
		/*this->_ = other._*/;
	return (*this);
}

// Destructor
WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat: destroying object\n";
}

void	WrongCat::makeSound(void)const
{
	std::cout << this->getType() << "\t:Nyan" << std::endl;
}
