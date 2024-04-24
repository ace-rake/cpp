#include "../ClassHeaders/Intern.hpp"
#include <iostream>
#include "../ClassHeaders/ShrubberyCreationForm.hpp"
#include "../ClassHeaders/RobotomyRequestForm.hpp"
#include "../ClassHeaders/PresidentialPardonForm.hpp"

// Constructor
Intern::Intern()
{
	std::cout << "Intern:\tcreating object\n";
	map[0].key = "shrubbery creation";
	map[0].func = &Intern::shrub_req;
	map[1].key = "robotomy request";
	map[1].func = &Intern::robo_req;
	map[2].key = "presidential pardon";
	map[2].func = &Intern::pres_req;
	
}

// Copy constructor
Intern::Intern(const Intern& other)
{
	std::cout << "Intern:\tcopying object\n";
	*this = other;
}

// Copy assignment operator overload
Intern& Intern::operator = (const Intern& other)
{
	std::cout << "Intern:\tcopying object (assignment)\n";
	if (this != &other)
	{
		/* this->_=other._ */
	}
	return (*this);
}

// Destructor
Intern::~Intern(void)
{
	std::cout << "Intern:\tdestroying object\n";
}

AForm * Intern::robo_req(const std::string & target)const
{
	return new RobotomyRequestForm(target);
}
AForm * Intern::shrub_req(const std::string & target)const
{
	return new ShrubberyCreationForm(target);
}
AForm * Intern::pres_req(const std::string & target)const
{
	return new PresidentialPardonForm(target);
}

AForm * Intern::makeForm	(	const std::string form, const std::string & target	)const
{
	for (int i = 0; i < 3; ++i)
		if (form == map[i].key)
		{
			std::cout << "Intern creates " << form << std::endl;
			 return (this->*(map[i].func))(target);
		}
	return NULL;
}
