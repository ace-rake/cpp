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
	for (int i = 0; i < 100; ++i)
		this->_ideas[i] = other._ideas[i];
	*this = other;
}

// Copy assignment operator overload
Brain& Brain::operator = (const Brain& other)
{
	std::cout << "Brain\t:copying object (assignement)\n";
	if (this != &other)
	{
		for (int i = 0; i < 100; ++i)
			this->_ideas[i] = other._ideas[i];
	}
	return (*this);
}

// Destructor
Brain::~Brain(void)
{
	std::cout << "Brain\t:destroying object\n";
}

void	Brain::giveIdea(std::string idea)
{
	int i;
	for (i = 0; !this->_ideas[i].empty() && i < 100 ; ++i);
	if ( i < 100 )
		this->_ideas[i] = idea;
}

std::string	*Brain::getIdeas(void)
{
	return this->_ideas;
}
