#include "../ClassHeaders/PresidentialPardonForm.hpp"
#include <iostream>

// Constructor
PresidentialPardonForm::PresidentialPardonForm(const std::string & target) : AForm("presidential pardon", 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm:\tcreating object\n";
}

// Copy constructor
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm("presidential pardon", 25, 5), _target(other.getTarget())
{
	std::cout << "PresidentialPardonForm:\tcopying object\n";
	*this = other;
}

// Copy assignment operator overload
PresidentialPardonForm& PresidentialPardonForm::operator = (const PresidentialPardonForm& other)
{
	std::cout << "PresidentialPardonForm:\tcopying object (assignment)\n";
	if (this != &other)
	{
		/* this->_=other._ */
	}
	return (*this);
}

// Destructor
PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm:\tdestroying object\n";
}

void	PresidentialPardonForm::beExecuted()const
{
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox\n";
}

const std::string & PresidentialPardonForm::getTarget()const
{
	return _target;
}
