#include "../ClassHeaders/Span.hpp"
#include <iostream>
#include <cmath>

// Constructor
Span::Span( size_t size)
{
	_i = new int[size];
	_max = size;
	_n = 0;
	std::cout << "Span:\tcreating object\n";
}

// Copy constructor
Span::Span(const Span& other)
{
	std::cout << "Span:\tcopying object\n";
	*this = other;
}

// Copy assignment operator overload
Span& Span::operator = (const Span& other)
{
	std::cout << "Span:\tcopying object (assignment)\n";
	if (this != &other)
	{
		delete[] this->_i;
		this->_i = new int[other._max];
		for (size_t n = 0; n < other._n; n++)
			this->_i[n] = other._i[n];
		this->_n = other._n;
		this->_max = other._max;
	}
	return (*this);
}

// Destructor
Span::~Span(void)
{
	delete[] _i;
	std::cout << "Span:\tdestroying object\n";
}

void	Span::addNumber(int i)
{
	if (_n >= _max)
		throw overflow();
	_i[_n++] = i;
}

void	Span::addNumberIt	(	std::list<int>::iterator begin, std::list<int>::iterator end)
{
	while (begin != end)
	{
		if (_n >= _max)
			throw overflow();
		_i[_n++] = *begin;
		begin++;
	}
}

int	Span::shortestSpan()const
{
	if (_n <= 1)
		throw notEnoughValues();
	int retval = abs(_i[0] - _i[1]); 
	for (size_t i = 0; i < _n; ++i)
		for (size_t j = i + 1; j < _n; ++j)
			if (i != j && abs(_i[i] - _i[j]) < retval)
				retval = abs(_i[i] - _i[j]);
	return retval;
}

int	Span::longestSpan()const
{
	if (_n <= 1)
		throw notEnoughValues();
	int retval = abs(_i[0] - _i[1]); 
	for (size_t i = 0; i < _n; ++i)
		for (size_t j = i + 1; j < _n; ++j)
			if (i != j && abs(_i[i] - _i[j]) > retval)
				retval = abs(_i[i] - _i[j]);
	return retval;
}

const char * Span::overflow::what() const throw()
{
		return (char *)"Already full";
}

const char * Span::notEnoughValues::what() const throw()
{
		return (char *)"Not enough values";
}
