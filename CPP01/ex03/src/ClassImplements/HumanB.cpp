#include "../ClassHeaders/HumanB.hpp"

Weapon	HumanB::getWeapon()
{
	return *this->_weapon;
}

void	HumanB::setWeapon(Weapon *weapon)
{
	this->_weapon = weapon;
	std::cout << this->_name << " equips a " << weapon->getType() << std::endl;
}
std::string	HumanB::getName()
{
	return this->_name;
}

void	HumanB::setName(std::string name)
{
	this->_name = name;
}

void	HumanB::attack()
{
	if (!this->_weapon)
		std::cout << this->_name << " attacks with " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " attacks with " << "fists cuz they got no weapon" << std::endl;

}

HumanB::HumanB(std::string name) : _name(name)
{
	std::cout << "Human " << name << " has been birthed"<< std::endl;
}

HumanB::~HumanB()
{

}
