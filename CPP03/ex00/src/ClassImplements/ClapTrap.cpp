#include "../main.h"

// Constructor
ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap:\tcreating object\n";
	this->_hp = 10;
	this->_ep = 10;
	this->_ad = 0;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "ClapTrap: copying object\n";
	*this = other;
}

// Copy assignment operator overload
ClapTrap& ClapTrap::operator = (const ClapTrap& other)
{
	std::cout << "ClapTrap:\tcopying object (assignement)\n";
	if (this != &other)
		/*this->_ = other._*/;
	return (*this);
}

// Destructor
ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap:\tdestroying object\n";
}

bool	ClapTrap::isDead(void)
{
	return this->_hp <= 0 ? true : false;
}

bool	ClapTrap::noEnergy(void)
{
	return this->_ep <= 0 ? true : false;
}

bool	ClapTrap::cantFunction(void)
{
	if (this->isDead())
	{
		std::cout << "ClapTrap:\tis dead" << std::endl;
		return true;
	}
	if (this->noEnergy())
	{
		std::cout << "ClapTrap:\tno energy" << std::endl;
		return true;
	}
	return false;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->cantFunction())
		return ;
	std::cout << "ClapTrap:\tattacks " << target << std::endl;
	this->_ep--;
}
