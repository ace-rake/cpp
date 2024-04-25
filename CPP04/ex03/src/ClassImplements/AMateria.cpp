#include "../ClassHeaders/AMateria.hpp"

// Constructor

AMateria::AMateria()
{
	//std::cout << "AMateria\t:creating object\n";
}

AMateria::AMateria(std::string const & type): _type(type)
{

}

AMateria::AMateria(AMateria const & that): _type(that._type)
{
	//std::cout << "AMateria\t:creating object (copy)\n";
}

AMateria::~AMateria()
{
	//std::cout << "AMateria\t:destroying object\n";
}

void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria abstractly used on " << target.getName() << std::endl;
}
