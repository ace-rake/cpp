#include "../ClassHeaders/AForm.hpp"
#include <iostream>

// Constructor

AForm::AForm(std::string name, short gradeSign, short gradeExec) : _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	if (gradeSign > 150 || gradeExec > 150)
		throw GradeTooHighException();
	if (gradeSign < 1 || gradeExec < 1)
		throw GradeTooLowException();
	std::cout << "AForm:\tcreating object\n";
}
// Copy constructor
AForm::AForm(const AForm& other) : _name(other.getName()), _gradeSign(other.getGradeSign()), _gradeExec(other.getGradeExec())
{
	std::cout << "AForm:\tcopying object\n";
	*this = other;
}

// Copy assignment operator overload
AForm& AForm::operator = (const AForm& other)
{
	std::cout << "AForm:\tcopying object (assignment)\n";
	if (this != &other)
	{
		this->_signed = other.getSigned();
	}
	return (*this);
}

// Destructor
AForm::~AForm(void)
{
	std::cout << "AForm:\tdestroying object\n";
}

const char * AForm::GradeTooHighException::what()const throw()
{
	return	(char *) "AForm grade too high\n";
}
const char * AForm::GradeTooLowException::what()const throw()
{
	return	(char *) "AForm grade too low\n";
}
const char * AForm::UnsignedForm::what()const throw()
{
	return	(char *) "AForm not signed\n";
}

void	AForm::beSigned(const Bureaucrat & b)
{
	if (b.getGrade() > this->_gradeSign)
		throw GradeTooLowException();
	_signed = true;
}

void	AForm::execute(const Bureaucrat & b)const
{
	if (b.getGrade() > this->getGradeSign())
		throw GradeTooLowException();
	else if (this->getSigned() == false)
		throw UnsignedForm();
	this->beExecuted();
}
