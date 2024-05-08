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

const char * ScalarConverter::invalid::what()const throw()
{
	return (char *)"Invalid sequence";
}

void ScalarConverter::convert(std::string str)
{
	ScalarConverter converter(str);
	try
	{	
		converter.whatIs();
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return ;
	}
	converter.printConv();
}

void ScalarConverter::printInfo(std::string str)
{
	ScalarConverter converter(str);
	std::cout << "\nstart conversion with " << str << std::endl;
	std::cout << "Is character ?\t: " << converter.isC() << std::endl;
	std::cout << "Is int ?\t: " << converter.isI() << std::endl;
	std::cout << "Is float ?\t: " << converter.isF() << std::endl;
	std::cout << "Is double ?\t: " << converter.isD() << std::endl;
}

void	ScalarConverter::whatIs()
{
	if (isL())
		_type = LITERAL;
	else if (isI())
		_type = INT;
	else if (isC())
		_type = CHAR;
	else if (isF())
		_type = FLOAT;
	else if (isD())
		_type = DOUBLE;
	else
		throw invalid();
}

bool	ScalarConverter::isL()
{
	if (_str.compare("inf") == 0 || _str.compare("+inf") == 0 || _str.compare("+inff") == 0)
	{
		_l = PINF;
		return true;
	}
	if (_str.compare("-inf") == 0 || _str.compare("-inff") == 0)
	{
		_l = NINF;
		return true;
	}
	if (_str.compare("nan") == 0)
	{
		_l = NAN;
		return true;
	}
	return false;
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

void	ScalarConverter::printConv(void)
{
	switch(_type){
		case LITERAL:
			printL();
			break;
		case FLOAT:
			printF();
			printConvF();
			break;
		case CHAR:
			printC();
			printConvC();
			break;
		case INT:
			printI();
			printConvI();
			break;
		case DOUBLE:
			printD();
			printConvD();
			break;
	}
}

void	ScalarConverter::printL()const
{
	printC();
	printI();
	printF();
	printD();

}

void	ScalarConverter::printF()const
{
	std::cout << "Float\t: ";

	if (_type == LITERAL)
	{
		if (_l == PINF)
			std::cout << "+inff\n";
		else if (_l == NINF)
			std::cout << "-inff\n";
		else if (_l == NAN)
			std::cout << "nanf\n";
		return ;
	}

	if (_f == 0.0f)
		std::cout << ".0f\n";
	else if (_f == static_cast<int>(_f))
		std::cout << _f << ".0f\n";
	else
		std::cout << _f << "f\n";
}

void	ScalarConverter::printConvF()
{
	_c = static_cast<char>(_f);
	printC();
	_i = static_cast<int>(_f);
	printI();
	_d = static_cast<double>(_f);
	printD();
}

void	ScalarConverter::printC()const
{
	if (_type == LITERAL)
		std::cout << "Char\t: " << "impossible" << "\n";
	else if (std::isprint(_c))
		std::cout << "Char\t: " << _c << "\n";
	else
		std::cout << "Char\t: " << "non displayable" << "\n";
}

void	ScalarConverter::printConvC()
{
	_f = static_cast<float>(_c);
	printF();
	_i = static_cast<int>(_c);
	printI();
	_d = static_cast<double>(_c);
	printD();
}

void	ScalarConverter::printI()const
{
	if (_type == LITERAL)
		std::cout << "Int\t: " << "impossible" << "\n";
	else
		std::cout << "Int\t: " << _i << "\n";
}

void	ScalarConverter::printConvI()
{
	_f = static_cast<float>(_i);
	printF();
	_c = static_cast<char>(_i);
	printC();
	_d = static_cast<double>(_i);
	printD();
}
	
void	ScalarConverter::printD()const
{
	std::cout << "Double\t: ";
	if (_type == LITERAL)
	{
		if (_l == PINF)
			std::cout << "+inf\n";
		else if (_l == NINF)
			std::cout << "-inf\n";
		else if (_l == NAN)
			std::cout << "nan\n";
		return ;
	}
	if (_d == 0.0)
		std::cout << ".0\n";
	else if (_d == static_cast<int>(_f))
		std::cout << _d << ".0\n";
	else
		std::cout << _d << "\n";
}

void	ScalarConverter::printConvD()
{
	_f = static_cast<float>(_d);
	printF();
	_i = static_cast<int>(_d);
	printI();
	_c = static_cast<char>(_d);
	printC();
}
