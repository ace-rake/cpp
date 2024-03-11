#include "../main.h"

// Constructor
ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	std::cout << "ScavTrap:\t" << name << ":\tcreating object\n";
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;
	this->_guardingGate = false;
}

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap& other):ClapTrap(other)
{
	std::cout << "ScavTrap:\t" << this->_name << ":\tcopying object\n";
	*this = other;
}

// Copy assignment operator overload
ScavTrap& ScavTrap::operator = (const ScavTrap& other)
{
	std::cout << "ScavTrap:\t" << this->_name << ":\tcopying object (assignement)\n";
	if (this != &other)
	{
		this->setName(other.getName());
		this->setAd(other.getAd());
		this->setEp(other.getEp());
		this->setHp(other.getHp());
	}
	return (*this);
}

// Destructor
ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap:\t" << this->getName() << ":\tdestroying object\n";
}

bool	ScavTrap::getGuardingGate(void)const
{
	return this->_guardingGate;
}

void	ScavTrap::setGuardingGate(bool mode)
{
	this->_guardingGate = mode;
}

void	ScavTrap::guardGate(void)
{
	if (this->getGuardingGate())
	{
		std::cout << "Scavtrap:\t" << this->getName() << ":\tis already guarding the gate" << std::endl;
		return ;
	}
	std::cout << "Scavtrap:\t" << this->getName() << ":\tis now guarding the gate" << std::endl;
	this->_guardingGate = true;
}
void	ScavTrap::attack(std::string target)
{
	std::cout << "ScavTrap:\t" << this->_name << ":\ttries to attack " << target << std::endl;
	if (this->cantFunction())
		return ;
	std::cout << "ScavTrap:\t" << this->_name << ":\tattacks " << target << " for "<< this->_ad << " damage" << std::endl;
	this->_ep--;
}
