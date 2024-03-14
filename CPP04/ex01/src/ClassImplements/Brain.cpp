#include "../main.h"

// Constructor
Brain::Brain(void)
{
	std::cout << "Brain\t:creating object\n";
}

// Copy constructor
Brain::Brain(const Brain& other)
{
	std::cout << "Brain\t:copying object\n";
	*this = other;
}

// Copy assignment operator overload
Brain& Brain::operator = (const Brain& other)
{
	std::cout << "Brain\t:copying object (assignement)\n";
	if (this != &other)
		/*this->_ = other._*/;
	return (*this);
}

// Destructor
Brain::~Brain(void)
{
	std::cout << "Brain\t:destroying object\n";
}
