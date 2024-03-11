#include "../main.h"

// Constructor
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	std::cout << "DiamondTrap:\t" << name << ":\tcreating object\n";
	this->_name = name;
	this->setHp(FragTrap::getHp());
	this->setEp(ScavTrap::getEp());
	this->setAd(FragTrap::getAd());
	this->setGuardingGate(false);
}

// Copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), FragTrap(other), ScavTrap(other)

{
	std::cout << "DiamondTrap:\t" << other._name << ":\tcopying object\n";
	*this = other;
}

// Copy assignment operator overload
DiamondTrap& DiamondTrap::operator = (const DiamondTrap& other)
{
	std::cout << "DiamondTrap:\t" << other._name << ":\tcopying object (assignement)\n";
	if (this != &other)
	{
		this->_name = other._name;
		this->_hp = other._hp;
		this->_ep = other._ep;
		this->_ad = other._ad;
	}
	return (*this);
}

// Destructor
DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap:\t" << this->getName() << ":\tdestroying object\n";
}

void	DiamondTrap::setName(std::string name)
{
	this->_name = name;
}

std::string	DiamondTrap::getName(void)const
{
	return this->_name;
}

void	DiamondTrap::whoAmI(void)const
{
	std::cout << "DiamondTrap:\t"<< this->getName() << ":\tWho am i ?" << std::endl;
	std::cout << "DiamondTrap:\t"<< this->getName() << ":\tMy name is " << this->getName() << " and my ClapTrap name is " << ClapTrap::getName() << std::endl;
}

void	DiamondTrap::attack(std::string target)
{
	ScavTrap::attack(target);
}
