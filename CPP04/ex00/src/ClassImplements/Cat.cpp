#include "../main.h"

// Constructor
Cat::Cat(void)
{
	std::cout << "Cat\t:creating object\n";
	this->setType("Cat");
}

// Copy constructor
Cat::Cat(const Cat& other)
{
	std::cout << "Cat\t:copying object\n";
	*this = other;
}

// Copy assignment operator overload
Cat& Cat::operator = (const Cat& other)
{
	std::cout << "Cat\t:copying object (assignement)\n";
	if (this != &other)
		/*this->_ = other._*/;
	return (*this);
}

// Destructor
Cat::~Cat(void)
{
	std::cout << "Cat\t:destroying object\n";
}

void	Cat::makeSound(void)const
{
	std::cout << this->getType() << "\t:Nyan" << std::endl;
}
