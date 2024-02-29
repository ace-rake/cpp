#include "../ClassHeaders/Weapon.hpp"

const std::string &Weapon::getType()
{
	std::string& ref = this->type;
	return (ref);
}
void Weapon::setType(std::string type)
{
	this->type = type;

}
