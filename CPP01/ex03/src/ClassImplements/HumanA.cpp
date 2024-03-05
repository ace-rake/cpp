#include "../main.h"

Weapon	HumanA::getWeapon()
{
	return this->_weapon;
}

void	HumanA::setWeapon(Weapon weapon)
{

	this->_weapon = weapon;
}
std::string	HumanA::getName()
{
	return this->_name;
}

void	HumanA::setName(std::string name)
{
	if (this->_name.empty())
		std::cout << "Human:\thas been renamed to " << name << std::endl;
	else
		std::cout << this->_name << ":\thas been renamed to " << name << std::endl;
	this->_name = name;
}

void	HumanA::attack()
{
	std::cout << this->_name << ":\tattack with " << this->_weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon& weapon) : _weapon(weapon)
{
	std::cout << "Human:\thas been birthed and has been gifted " << weapon.getType() << std::endl;
	this->setName(name);
}

HumanA::~HumanA()
{

}
