#include "../main.h"

// Constructor
FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap:\t" << name << ":\tcreating object\n";
	this->_hp = 100;
	this->_ep = 100;
	this->_ad = 30;
}

// Copy constructor
FragTrap::FragTrap(const FragTrap& other):ClapTrap(other)
{
	std::cout << "FragTrap: copying object\n";
	*this = other;
}

// Copy assignment operator overload
FragTrap& FragTrap::operator = (const FragTrap& other)
{
	std::cout << "FragTrap: copying object (assignement)\n";
	if (this != &other)
		/*this->_ = other._*/;
	return (*this);
}

// Destructor
FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap:\t" << this->getName() << ":\tdestroying object\n";
}


void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap:\t" << this->getName() << ":\tGimme one" << std::endl;
}
