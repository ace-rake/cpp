#include "../main.h"

// Constructor
ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap:\t" << name << ":\tcreating object\n";
	this->setName(name);
	this->setHp(10);
	this->setEp(10);
	this->setAd(0);
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "ClapTrap:\t" << other._name << ":\tcopying object\n";
	*this = other;
}

// Copy assignment operator overload
ClapTrap& ClapTrap::operator = (const ClapTrap& other)
{
	std::cout << "ClapTrap:\t" << other._name << ":\tcopying object (assignment)\n";
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
ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap:\t" << this->_name << ":\tdestroying object\n";
}

// Getters and Setters
void	ClapTrap::setName(std::string name)
{
	this->_name=name;
}
std::string		ClapTrap::getName(void)const
{
	return this->_name;
}
void	ClapTrap::setHp(int hp)
{
	this->_hp=hp;
}
int		ClapTrap::getHp(void)const
{
	return this->_hp;
}
void	ClapTrap::setEp(int ep)
{
	this->_ep=ep;
}
int		ClapTrap::getEp(void)const
{
	return this->_ep;
}
void	ClapTrap::setAd(int ad)
{
	this->_ad=ad;
}
int		ClapTrap::getAd(void)const
{
	return this->_ad;
}

bool	ClapTrap::isDead(void)const
{
	if (this->_hp <= 0)
		std::cout << "ClapTrap:\t" << this->_name << ":\tIs dead" << std::endl;
	return this->_hp <= 0 ? true : false;
}

bool	ClapTrap::noEnergy(void)const
{
	if (this->_ep <= 0)
		std::cout << "ClapTrap:\t" << this->_name << ":\tHas no energy" << std::endl;
	return this->_ep <= 0 ? true : false;
}

bool	ClapTrap::cantFunction(void)const
{
	return this->isDead() || this->noEnergy();
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap:\t" << this->_name << ":\ttries to attack " << target << std::endl;
	if (this->cantFunction())
		return ;
	std::cout << "ClapTrap:\t" << this->_name << ":\tattacks " << target << " for "<< this->_ad << " damage" << std::endl;
	this->_ep--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->isDead())
		return ;
	std::cout << "ClapTrap:\t" << this->_name << ":\tTakes " << amount << " damage" << std::endl;
	this->_hp -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap:\t" << this->_name << ":\ttries to heal" << std::endl;
	if (this->cantFunction())
		return ;
	std::cout << "ClapTrap:\t" << this->_name << ":\theals for " << amount << std::endl;
	this->_hp += amount;
	this->_ep--;
}
