#include "../main.h"

// Constructor
Dog::Dog(void)
{
	std::cout << "Dog\t:creating object\n";
	this->type = "Dog";
	this->_brain = new Brain();
}

// Copy constructor
Dog::Dog(const Dog& other)
{
	std::cout << "Dog\t:copying object\n";
	this->_brain = new Brain(*other._brain);
	*this = other;
}

// Copy assignment operator overload
Dog& Dog::operator = (const Dog& other)
{
	std::cout << "Dog\t:copying object (assignement)\n";
	if (this != &other)
	{
		this->setBrain(other._brain);
	}
	return (*this);
}

// Destructor
Dog::~Dog(void)
{
	std::cout << "Dog\t:destroying object\n";
	delete this->_brain;
}

void	Dog::makeSound(void)const
{
	std::cout << this->getType() << "\t:Bork" << std::endl;
}

Brain	*Dog::getBrain(void)const
{
	return this->_brain;
}
void	Dog::setBrain(Brain *brain)
{
	delete this->_brain;
	this->_brain = new Brain(*brain);
}
