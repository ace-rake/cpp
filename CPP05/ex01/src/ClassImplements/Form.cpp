#include "../ClassHeaders/Form.hpp"
#include <iostream>

// Constructor
Form::Form() : _name("Nameless"), _signed(false), _gradeSign(1), _gradeExec(1)
{
	std::cout << "Form:\tcreating object\n";
}

Form::Form(std::string name, short gradeSign, short gradeExec) : _name(name), _signed(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	if (gradeSign > 150 || gradeExec > 150)
		throw GradeTooHighException();
	if (gradeSign < 1 || gradeExec < 1)
		throw GradeTooLowException();
	std::cout << "Form:\tcreating object\n";
}
// Copy constructor
Form::Form(const Form& other) : _name(other.getName()), _signed(false), _gradeSign(other.getGradeSign()), _gradeExec(other.getGradeExec())
{
	std::cout << "Form:\tcopying object\n";
	*this = other;
}

// Copy assignment operator overload
Form& Form::operator = (const Form& other)
{
	std::cout << "Form:\tcopying object (assignment)\n";
	if (this != &other)
	{
		this->_signed = other.getSigned();
	}
	return (*this);
}

// Destructor
Form::~Form(void)
{
	std::cout << "Form:\tdestroying object\n";
}

// Getters and Setters
std::string Form::getName()const
{
	return _name;
}

bool	Form::getSigned()const
{
	return _signed;
}

void	Form::setSigned(bool newSigned)
{
	_signed = newSigned;
}
short	Form::getGradeSign()const
{
	return _gradeSign;
}
short	Form::getGradeExec()const
{
	return _gradeExec;
}

const char * Form::GradeTooHighException::what()const throw()
{
	return	(char *) "Form grade too high\n";
}
const char * Form::GradeTooLowException::what()const throw()
{
	return	(char *) "Form grade too low\n";
}

void	Form::beSigned(const Bureaucrat & b)
{
	if (b.getGrade() > this->_gradeSign)
		throw GradeTooLowException();
	_signed = true;
}

std::ostream & operator << (std::ostream & os, Form & other)
{
	os << "name : " << other.getName();
	os << ", signed : " << (other.getSigned() ? "True" : "False");
	os << ", gradeSign : " << other.getGradeSign();
	os << ", gradeExec : " << other.getGradeExec();
	return os;
}
