#include "../main.h"

// Constructor
ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	std::cout << "ScavTrap: creating object\n";
}

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap& other):ClapTrap(other)
{
	std::cout << "ScavTrap: copying object\n";
	*this = other;
}

// Copy assignment operator overload
ScavTrap& ScavTrap::operator = (const ScavTrap& other)
{
	std::cout << "ScavTrap: copying object (assignement)\n";
	if (this != &other)
	{
		this->_name = other.getName();
		this->_ = other._;
		this->_ = other._;
		this->_ = other._;
	}
	return (*this);
}

// Destructor
ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap: destroying object\n";
}
