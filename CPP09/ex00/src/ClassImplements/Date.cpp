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


std::ostream & operator << (std::ostream & o,const Date & date)
{
	o << date.getYear() << ",";
	o << date.getMonth() << ",";
	o << date.getDay();
	return o;
}
