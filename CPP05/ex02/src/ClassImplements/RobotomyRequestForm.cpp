#include "../ClassHeaders/RobotomyRequestForm.hpp"
#include <cstdlib>
#include <iostream>

// Constructor
RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("robotomy request", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm:\tcreating object\n";
}

// Copy constructor
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm("robotomy request", 72, 45), _target(other.getTarget())
{
	std::cout << "RobotomyRequestForm:\tcopying object\n";
	*this = other;
}

// Copy assignment operator overload
RobotomyRequestForm& RobotomyRequestForm::operator = (const RobotomyRequestForm& other)
{
	std::cout << "RobotomyRequestForm:\tcopying object (assignment)\n";
	if (this != &other)
	{
		/* this->_=other._ */
	}
	return (*this);
}

// Destructor
RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm:\tdestroying object\n";
}

/* RobotomyRequestForm: Required grades: sign 72, exec 45 */
/* Makes some drilling noises. Then, informs that <target> has been robotomized */
/* successfully 50% of the time. Otherwise, informs that the robotomy failed. */
void	RobotomyRequestForm::beExecuted()const
{
	std::cout << "Bzztzz\n";
	std::srand(static_cast<unsigned int>(time(NULL)));//Randomize the seed
	int r = rand();
	std::cout << r << std::endl;
	if (r % 2 == 0)
		std::cout << _target << " has been robotomized\n";
	else
		std::cout << "Robotomisation on " << _target << " has failed\n";
}
const std::string & RobotomyRequestForm::getTarget()const
{
	return _target;
}
