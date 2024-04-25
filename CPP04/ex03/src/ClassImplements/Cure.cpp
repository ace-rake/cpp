#include "../ClassHeaders/Cure.hpp"

// Constructor
Cure::Cure() : AMateria("cure")
{
	//std::cout << "Cure:\tcreating object\n";
}

// Copy constructor
Cure::Cure(const Cure& other) : AMateria("cure")

{
	//std::cout << "Cure:\t" << ":\tcopying object\n";
	*this = other;
}

// Copy assignment operator overload
Cure& Cure::operator = (const Cure& other)
{
	//std::cout << "Cure:\t" << ":\tcopying object (assignment)\n";
	if (this != &other)
	{
		/*this->_=other._*/
	}
	return (*this);
}

// Destructor
Cure::~Cure(void)
{
	//std::cout << "Cure:\t" << ":\tdestroying object\n";
}


std::string const & Cure::getType()const
{
	return this->_type;
}

Cure * Cure::clone()const
{
	return new Cure(*this);
}

void	Cure::use(ICharacter & target)
{
	std::cout << "* Heals " << target.getName() << "'s wounds' *" << std::endl;
}
