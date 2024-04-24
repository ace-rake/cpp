#include "../ClassHeaders/Bureaucrat.hpp"
#include <iostream>

// Constructor
Bureaucrat::Bureaucrat(std::string name, short grade): _name(name)
{
	this->setGrade(grade);
	std::cout << "Bureaucrat:\tcreating object\n";
}


// Copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
	std::cout << "Bureaucrat:\tcopying object\n";
	*this = other;
}

// Copy assignment operator overload
Bureaucrat& Bureaucrat::operator = (const Bureaucrat& other)
{
	std::cout << "Bureaucrat:\tcopying object (assignment)\n";
	if (this != &other)
	{
		/* this->_=other._ */
	}
	return (*this);
}

// Destructor
Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat:\tdestroying object\n";
}

short Bureaucrat::getGrade()
{
	return this->_grade;
}

void Bureaucrat::setGrade(short new_grade)
{
	if (new_grade > 150)
		throw GradeTooHighException();
	if (new_grade < 1)
		throw GradeTooLowException();
	this->_grade = new_grade;
}

std::string Bureaucrat::getName(void)
{
	return this->_name;
}

void Bureaucrat::setName(const std::string new_name)
{
	_name = new_name;
}
const char * Bureaucrat::GradeTooHighException::what()const throw()
{
	return ((char *)"Grade too high\n");
}

const char * Bureaucrat::GradeTooLowException::what()const throw()
{
	return ((char *)"Grade too low\n");
}

void	Bureaucrat::incrementGrade(void)
{
	try{
		this->setGrade(_grade + 1);
	} catch (const std::exception &e)
	{
		std::cout << e.what();
	}
}
void	Bureaucrat::decrementGrade(void)
{
	try{
		this->setGrade(_grade - 1);
	} catch (const std::exception &e)
	{
		std::cout << e.what();
	}
}
std::ostream&	operator << (std::ostream& os, Bureaucrat& that)
{
	os << that.getName() << ", bureaucrat grade " << that.getGrade() << std::endl;
	return (os);
}
