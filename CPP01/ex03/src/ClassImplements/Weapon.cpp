#include "../main.h"

const std::string &Weapon::getType()
{
	std::string& ref = this->_type;
	return (ref);
}
void Weapon::setType(std::string type)
{
	std::cout << this->_type << " has morphed into " << type << std::endl;
	this->_type = type;

}

Weapon::Weapon(std::string name)
{
	std::cout << "Created weapon " << name << std::endl;
	this->_type = name;
}

Weapon::Weapon()
{
	std::cout << "Created weapon"<< std::endl;
}
Weapon::~Weapon()
{

}
