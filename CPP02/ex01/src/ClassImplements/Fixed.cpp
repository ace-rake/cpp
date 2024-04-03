#include "../main.h"

// Constructor
Fixed::Fixed(void)
{
	std::cout << "Fixed: creating object\n";
	this->_value = 0;
}

Fixed::Fixed(const int raw)
{
	std::cout << "Fixed: creating object\n";
	this->_value = raw * (1 << _fBits);
}
Fixed::Fixed(const float raw)
{
	std::cout << "Fixed: creating object\n";
	this->_value = static_cast<const int>( raw * (1 << _fBits));
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
// Get the raw bits
int	Fixed::getRawBits(void)
{
	std::cout << "getRawBits() called\n";
	return (this->_value);
}
// Set the raw bits
void	Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits(" << raw << ") called\n";
	this->_value = raw;
}
// Get the float value by doing value / (1 bit shifted to the left byt _fBits(8))
float	Fixed::toFloat(void)
{
	return (static_cast<float>(this->_value) / (1 << _fBits));
}
// Get the int value by bitshifting to the right by _fBits(8)
int	Fixed::toInt(void)
{
	return (this->_value >> _fBits);
}

std::ostream&	operator << (std::ostream& os, Fixed& that)
{
	os << that.toFloat();
	return (os);
}
