#include "../ClassHeaders/Materia.hpp"

// Constructor
Materia::Materia()
{
	//std::cout << "Materia:\tcreating object\n";
}

// Copy constructor
Materia::Materia(const Materia& other)
{
	//std::cout << "Materia:\t" << ":\tcopying object\n";
	*this = other;
}

// Copy assignment operator overload
Materia& Materia::operator = (const Materia& other)
{
	//std::cout << "Materia:\t" << ":\tcopying object (assignment)\n";
	if (this != &other)
	{
		/*this->_=other._*/
	}
	return (*this);
}

// Destructor
Materia::~Materia(void)
{
	//std::cout << "Materia:\t" << ":\tdestroying object\n";
}


std::string const & AMateria::getType() const
{
	return(this->_type);
}

void Materia::use(ICharacter& target)
{
	std::cout << "Materia abstractly used on " << target.getName() << std::endl;
}
