#include "../ClassHeaders/Date.hpp"
#include <cstdlib>
#include <iostream>
#include <ostream>

// Constructor
Date::Date()
{
	/* std::cout << "Date:\tcreating object\n"; */
}

Date::Date(std::string date)
{
	_year = atoi(date.substr(0, date.find('-')).c_str());
	date = date.substr(date.find('-') + 1);
	_month = atoi(date.substr(0, date.find('-')).c_str());
	date = date.substr(date.find('-') + 1);
	_day = atoi(date.c_str());
}

// Copy constructor
Date::Date(const Date& other)
{
	/* std::cout << "Date:\tcopying object\n"; */
	*this = other;
}

// Copy assignment operator overload
Date& Date::operator = (const Date& other)
{
	/* std::cout << "Date:\tcopying object (assignment)\n"; */
	if (this != &other)
	{
		_year = other._year;
		_month = other._month;
		_day = other._day;
	}
	return (*this);
}

// Destructor
Date::~Date(void)
{
	/* std::cout << "Date:\tdestroying object\n"; */
}
bool	Date::operator == (const Date& other)const
{
	if (	_year == other._year &&
			_month == other._month &&
			_day == other._day)
		return (true);
	return false;
}

bool	Date::operator < (const Date& other)const
{
	if (_year < other._year)
		return true;
	else if (_year > other._year)
		return false;
	if (_month < other._month)
		return true;
	else if (_month > other._month)
		return false;
	if (_day < other._day)
		return true;
	return false;
}

Date &	Date::operator ++ ()
{
	if (++_day > 31)
	{
		_day = 1;
		if (++_month > 12)
		{
			_month = 1;
			_year++;
		}
	}
	return *this;
}

int Date::operator - (const Date&other)const
{
	return (abs(this->getTotalDays() - other.getTotalDays()));
}

int	Date::getTotalDays(void)const
{
	return (_year * 372) + (_month * 31) + _day;
}
void	Date::printDate()
{
	std::cout << "Year:month:day" <<
		_year << "," <<
		_month<< "," <<
		_day << std::endl;
}

std::ostream & operator << (std::ostream & o,const Date & date)
{
	o << date.getYear() << ",";
	o << date.getMonth() << ",";
	o << date.getDay();
	return o;
}
