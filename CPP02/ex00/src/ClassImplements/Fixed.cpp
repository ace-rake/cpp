#include "../main.h"

// Constructor
Fixed::Fixed(void)
{
	std::cout << "Fixed: creating object\n";
	this->_value = 0;
}

// Copy constructor
Fixed::Fixed(const Fixed& other)
{
	std::cout << "Fixed: copying object\n";
	*this = other;
}

// Copy assignment operator overload
Fixed& Fixed::operator = (const Fixed& other)
{
	std::cout << "Fixed: copying object (assignement)\n";
	if (this != &other)
		this->_value = other._value;
	return (*this);
}

// Destructor
Fixed::~Fixed(void)
{
	std::cout << "Fixed: destroying object\n";
}

int	Fixed::getRawBits(void)
{
	std::cout << "getRawBits() called\n";
	return (this->_value);
}

void	Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits(" << raw << ") called\n";
	this->_value = raw;
}
