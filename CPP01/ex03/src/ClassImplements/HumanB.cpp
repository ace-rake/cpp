#include "../main.h"

Weapon	HumanB::getWeapon()
{
	return *this->_weapon;
}

void	HumanB::setWeapon(Weapon *weapon)
{
	this->_weapon = weapon;
	std::cout << this->_name << ":\tequips a " << weapon->getType() << std::endl;
}
std::string	HumanB::getName()
{
	return this->_name;
}

void	HumanB::setName(std::string name)
{
	std::cout << "Human:\thas been renamed to :" << name << std::endl;
	this->_name = name;
}

void	HumanB::attack()
{
	if (this->_weapon)
		std::cout << this->_name << ":\tattacks with " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << ":\tattacks with " << "fists cuz they got no weapon" << std::endl;

}

HumanB::HumanB(std::string name)
{
	this->_weapon = NULL;
	std::cout << "Human:\thas been birthed"<< std::endl;
	this->setName(name);
}

HumanB::~HumanB()
{

}
