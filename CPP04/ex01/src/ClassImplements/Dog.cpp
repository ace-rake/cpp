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
	this->_brain = brain;
}

void	Dog::giveIdea(std::string idea)
{
	for (int i = 0; this->_brain->_ideas[i].empty() && i < 100 ; ++i)
	{

	}

}
