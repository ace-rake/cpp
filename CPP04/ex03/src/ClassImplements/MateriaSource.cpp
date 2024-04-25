#include "../ClassHeaders/MateriaSource.hpp"

// Constructor
MateriaSource::MateriaSource()
{
	//std::cout << "MateriaSource:\tcreating object\n";
}

// Copy constructor
MateriaSource::MateriaSource(const MateriaSource& other)
{
	//std::cout << "MateriaSource:\t" << ":\tcopying object\n";
	*this = other;
}

// Copy assignment operator overload
MateriaSource& MateriaSource::operator = (const MateriaSource& other)
{
	//std::cout << "MateriaSource:\t" << ":\tcopying object (assignment)\n";
	if (this != &other)
	{
		/*this->_=other._*/
	}
	return (*this);
}

// Destructor
MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; ++i)
		if (this->_inventory[i])
			delete this->_inventory[i];
	//std::cout << "MateriaSource:\t" << ":\tdestroying object\n";
}

void	MateriaSource::learnMateria(AMateria * m)
{
	int i;
	for (i = 0; i < 4 && (this->_inventory)[i] != 0; i++);
	if (i >= 4)
	{
		std::cout << "Cant learn more AMaterias" << std::endl;
		return ;
	}
	(this->_inventory)[i] = m;
	std::cout << "AMateria " << m->getType() << " has been learned" << std::endl;
}


AMateria*	MateriaSource::createMateria	(	std::string const & type)
{
		int i = 0;

	while ((this->_inventory)[i] && ((this->_inventory)[i])->getType() != type && i < 4)
		i++;
	if (i >= 4 || !(this->_inventory)[i])
	{
		std::cout << type << " materia does not exit\n";
		return (NULL);
	}
	std::cout << "Materia " << type << " created\n";
	return (((this->_inventory)[i])->clone());
}

void	MateriaSource::printInventory(void)const
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_inventory[i])
			std::cout << this->_inventory[i]->getType() << std::endl;
	}
}
