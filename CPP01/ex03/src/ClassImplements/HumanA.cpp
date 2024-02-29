#include "../ClassHeaders/HumanA.hpp"

Weapon	HumanA::getWeapon()
{
	return this->weapon;
}

void	HumanA::setWeapon(Weapon weapon)
{
	this->weapon = weapon;
}
std::string	HumanA::getName()
{
	return this->name;
}

void	HumanA::setName(std::string name)
{
	this->name = name;
}

HumanA::HumanA(Weapon weapon)
{
	this->weapon = weapon;
}

HumanA::~HumanA()
{

}
