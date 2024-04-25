#include "../ClassHeaders/Ice.hpp"

// Constructor
Ice::Ice() : AMateria("ice")
{
	//std::cout << "Ice:\tcreating object\n";
}

// Copy constructor
Ice::Ice(const Ice& other) : AMateria("ice")
{
	//std::cout << "Ice:\t" << ":\tcopying object\n";
	*this = other;
}

// Copy assignment operator overload
Ice& Ice::operator = (const Ice& other)
{
	(void)other;
	//std::cout << "Ice:\t" << ":\tcopying object (assignment)\n";
	return (*this);
}
//TODO fix this

// Destructor
Ice::~Ice(void)
{
	//std::cout << "Ice:\t" << ":\tdestroying object\n";
}

std::string const & Ice::getType()const
{
	return this->_type;
}

Ice * Ice::clone()const
{
	return new Ice(*this);
}

void	Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
