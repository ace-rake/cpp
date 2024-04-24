#include "../ClassHeaders/ScalarConverter.hpp"
#include <cctype>
#include <cstdlib>
#include <iostream>
#include <string>

// Constructor
ScalarConverter::ScalarConverter(std::string str) : _str(str)
{
	/* std::cout << "ScalarConverter:\tcreating object\n"; */
	_f = 0.0f;
	_i = 0;
	_c = '\0';
	_d = 0.0;
}

// Copy constructor
ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
	std::cout << "ScalarConverter:\tcopying object\n";
	*this = other;
}

// Copy assignment operator overload
ScalarConverter& ScalarConverter::operator = (const ScalarConverter& other)
{
	std::cout << "ScalarConverter:\tcopying object (assignment)\n";
	if (this != &other)
	{
		/* this->_=other._ */
	}
	return (*this);
}

// Destructor
ScalarConverter::~ScalarConverter(void)
{
	/* std::cout << "ScalarConverter:\tdestroying object\n"; */
}

void ScalarConverter::convert(std::string str)
{
	ScalarConverter converter(str);
	converter.whatIs();
	
}

void ScalarConverter::printInfo(std::string str)
{
	ScalarConverter converter(str);
	std::cout << "\nstart conversion with " << str << std::endl;
	std::cout << "Is character ?\t: " << converter.isC() << std::endl;
	std::cout << "Is int ?\t: " << converter.isI() << std::endl;
	std::cout << "Is float ?\t: " << converter.isF() << std::endl;
	std::cout << "Is double ?\t: " << converter.isD() << std::endl;

	//TODO put actual gotten values here
	//first gotta get that actual value
	//then, convert that value into the others
	
	converter.whatIs();
	if (converter._type == FLOAT)
		std::cout << converter._f << "f\n";
	
}

void	ScalarConverter::whatIs()
{
	if (isI())
		_type = INT;
	else if (isC())
		_type = CHAR;
	else if (isF())
		_type = FLOAT;
	else if (isD())
		_type = DOUBLE;
}

bool ScalarConverter::isC()
{
	if (std::isdigit(_str.at(0)))
		return false;
	if (_str.length() == 1 && std::isprint(_str.at(0)))
	{
		_c = _str.at(0);
		return true;
	}
	return false;
}

bool ScalarConverter::isI()
{
	int i = 0;
	if (_str[0] == '-' || _str[0] == '+')
		i = 1;
	for (;_str[i]; ++i)
	{
		if (!std::isdigit(_str.at(i)))
			return false;
	}
	if ((_str.at(0) == '-' || _str.at(0) == '+') ? _str.length() > 1 : _str.length() > 0)
	{
		_i = atoi(_str.c_str());	
		return (true);
	}
	return false;
}

bool ScalarConverter::isF()
{
	if (_str.at(_str.length() - 1) != 'f' || _str.length() <= 1)
		return false;
	ScalarConverter tmp(_str.substr(0, _str.length() - 1));
	if (tmp.isD())
	{
		_f = atof(_str.c_str());
		return true;
	}
	return false;
}

bool ScalarConverter::isD()
{
	bool dot = false;
	int i = 0;
	if (_str.at(0) == '-' || _str.at(0) == '+')
		i = 1;
	for (; _str[i]; ++i)
	{
		if (std::isdigit(_str.at(i)))
			continue ;
		else if (_str.at(i) == '.')
		{
			if (dot)
				return false;
			dot = true;
		}
		else
			return false;
	}
	if (dot)
		_d = atof(_str.c_str());
	return dot;
}
