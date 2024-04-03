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
	/*
	 *std::cout << "Fixed: creating object with float value " << raw << std::endl;
	 */
	this->_value = static_cast<const int>( raw * (1 << _fBits));
}

// Copy constructor
Fixed::Fixed(const Fixed& other)
{
	//std::cout << "Fixed: copying object\n";
	*this = other;
}

// Copy assignment operator overload
Fixed& Fixed::operator = (const Fixed& other)
{
	//std::cout << "Fixed: copying object (assignement)\n";
	if (this != &other)
		this->_value = other._value;
	return (*this);
}

// Eq assignment operator overload


// Destructor
Fixed::~Fixed(void)
{
	std::cout << "Fixed: destroying object\n";
}
// Get the raw bits
int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits() called\n";
	return (this->_value);
}
// Set the raw bits
void	Fixed::setRawBits(const int raw)
{
	//std::cout << "setRawBits(" << raw << ") called\n";
	this->_value = raw;
}
// Get the float value by doing value / (1 bit shifted to the left byt _fBits(8))
float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->_value) / (1 << _fBits));
}
// Get the int value by bitshifting to the right byt _fBits(8)
int	Fixed::toInt(void) const
{
	return (this->_value >> _fBits);
}

std::ostream&	operator << (std::ostream& os, const Fixed& that)
{
	os << that.toFloat();
	return (os);
}	
// Comparison operator overloads
// Eq assignment operator overload
bool	Fixed::operator == (Fixed& that) const
{
	return this->getRawBits() == that.getRawBits();
}
// Not eq assignment operator overload
bool	Fixed::operator != (Fixed& that) const
{
	return this->getRawBits() != that.getRawBits();
}
// Bigger than assignment operator overload
bool	Fixed::operator > (Fixed& that) const
{
	return this->getRawBits() > that.getRawBits();
}
// Smaller than assignment operator overload
bool	Fixed::operator < (Fixed& that) const
{
	return this->getRawBits() < that.getRawBits();
}
// Smaller or eq assignment operator overload
bool	Fixed::operator <= (Fixed& that) const
{
	return this->getRawBits() <= that.getRawBits();
}
// Bigger or eq assignment operator overload
bool	Fixed::operator >= (Fixed& that) const
{
	return this->getRawBits() >= that.getRawBits();
}

// Arithmetic operators
// *
Fixed	Fixed::operator * (Fixed& that) const
{
	return (this->toFloat() * that.toFloat());	
}
// /
Fixed	Fixed::operator / (Fixed& that) const
{
	return (this->toFloat() / that.toFloat());	
}
// +
Fixed	Fixed::operator + (Fixed& that) const
{
	return (this->toFloat() + that.toFloat());	
}
// -
Fixed	Fixed::operator - (Fixed& that) const
{
	return (this->toFloat() - that.toFloat());	
}

// In/Decrement operators
// Pre increment
Fixed&	Fixed::operator ++ ()
{
	this->_value += (1);
	return *this;
}
// Post increment
Fixed	Fixed::operator ++ (int)
{
	Fixed tmp = *this;
	this->_value += (1);
	return tmp;
}
// Pre decrement
Fixed&	Fixed::operator -- ()
{
	this->_value -= (1);
	return *this;
}
// Post decrement
Fixed	Fixed::operator -- (int)
{
	Fixed tmp = *this;
	this->_value -= (1);
	return tmp;
}

//	Min/Max
Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	return a.getRawBits() <= b.getRawBits() ? a : b;
}
Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	return a.getRawBits() >= b.getRawBits() ? a : b;
}
const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	return a.getRawBits() <= b.getRawBits() ? a : b;
}
const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	return a.getRawBits() >= b.getRawBits() ? a : b;
}
