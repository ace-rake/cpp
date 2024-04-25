#include "../ClassHeaders/Character.hpp"

// Constructor
Character::Character()
{
	//std::cout << "Character:\tcreating object\n";
}

Character::Character(std::string name):_name(name)
{
	//std::cout << "Character:\tcreating object\n";
}

// Copy constructor
Character::Character(const Character& other)
{
	//std::cout << "Character:\tcopying object\n";
	*this = other;
}

// Copy assignment operator overload
Character& Character::operator = (const Character& other)
{
	//std::cout << "Character:\tcopying object (assignment)\n";
	if (this != &other)
	{
		/*this->_=other._*/
	}
	return (*this);
}

// Destructor
Character::~Character(void)
{
	for (int i = 0; i < 4; ++i)
		if (this->_inventory[i])
			delete this->_inventory[i];
	//std::cout << "Character:\tdestroying object\n";
}

std::string const & Character::getName()const
{
	return this->_name;
}

void	Character::equip(AMateria *m)
{
	int i;
	for (i = 0; i < 4 && (this->_inventory)[i] != 0; i++);
	if (i >= 4)
	{
		std::cout << "Cant learn more AMaterias" << std::endl;
		return ;
	}
	(this->_inventory)[i] = m;
	std::cout << "AMateria " << m->getType() << " has been equiped" << std::endl;
}


void	Character::unequip(int idx)
{
(void)idx;

}
void	Character::use(int idx, ICharacter& target)
{
	if (this->_inventory[idx])
	{
		this->_inventory[idx]->use(target);
	}
(void)target;
(void)idx;
}
//TODO Implement these functions
