#include "../ClassHeaders/HumanA.hpp"

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
	this->_name = name;
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with " << this->_weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon& weapon) : _weapon(weapon), _name(name) 
{
	std::cout << "Human " << name << " has been birthed and has been gifted " << weapon.getType() << std::endl;
}

HumanA::~HumanA()
{

}
