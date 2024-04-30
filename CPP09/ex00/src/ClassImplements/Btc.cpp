#include "../ClassHeaders/Btc.hpp"
#include <fstream>
#include <iostream>
#include <cstdlib>

// Constructor
Btc::Btc()
{
	std::cout << "Btc:\tcreating object\n";
}

Btc::Btc(std::string file)// Assume string here is file name
{
	std::ifstream stream("../data.csv");
	if (!stream.is_open())
		std::cout << "File didnt open\n";
	(void)file;

	for (std::string line; std::getline(stream, line);)
	{
		Date date(line);
		_data[date] = atof(line.substr(line.find(",") + 1).c_str());
	}
	stream.close();
}

// Copy constructor
Btc::Btc(const Btc& other)
{
	std::cout << "Btc:\tcopying object\n";
	*this = other;
}

// Copy assignment operator overload
Btc& Btc::operator = (const Btc& other)
{
	std::cout << "Btc:\tcopying object (assignment)\n";
	if (this != &other)
	{
		/* this->_=other._ */
	}
	return (*this);
}

// Destructor
Btc::~Btc(void)
{
	std::cout << "Btc:\tdestroying object\n";
}

void	Btc::printData(void)const
{
	for (std::map<Date, float>::const_iterator it = _data.begin();it != _data.end();it++)
	{
		std::cout << it->first << "\t: " << it->second << std::endl;
	}
}
void	Btc::printData(Date date)const
{
	if (_data.find(date) != _data.end())
		std::cout << _data.find(date)->first << " : " << _data.find(date)->second << std::endl;
	else
		std::cout << "cant find " << date << std::endl;;
}

float	Btc::retrieve(Date date)const
{
	//First check if exact match can be found
	//if not get surrounding matches and interpolate
	//TODO check for beginning or end
	std::cout << "Looking for " << date << std::endl;
	if (_data.find(date) != _data.end())
		return _data.find(date)->second;
	std::cout << "cant find exact match\nCalculation interpolation..." << std::endl;

	std::map<Date, float>::const_iterator lower = _data.lower_bound(date);
	lower--;
	std::map<Date, float>::const_iterator upper = _data.lower_bound(date);
	std::cout << "lower bound ";
	printData(lower->first);
	std::cout << "upper bound ";
	printData(upper->first);

	double distance = upper->first - lower->first; 
	double between = date - lower->first;
	double percentage = static_cast<double>(between / distance);
	float retval = ((upper->second - lower->second)*percentage) + lower->second;
	return retval;
}

float	Btc::retrieve(std::string str)const
{
	Date date(str);
	return this->retrieve(date);
}
