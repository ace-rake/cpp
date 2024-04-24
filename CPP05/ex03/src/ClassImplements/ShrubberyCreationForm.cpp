#include "../ClassHeaders/ShrubberyCreationForm.hpp"
#include <fstream>
#include <iostream>

// Constructor
ShrubberyCreationForm::ShrubberyCreationForm(const std::string & target) : AForm("shrubbery creation", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm:\tcreating object\n";
}

// Copy constructor
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm("shrubbery creation", 145, 137),_target(other.getTarget())
{
	std::cout << "ShrubberyCreationForm:\tcopying object\n";
	*this = other;
}

// Copy assignment operator overload
ShrubberyCreationForm& ShrubberyCreationForm::operator = (const ShrubberyCreationForm& other)
{
	std::cout << "ShrubberyCreationForm:\tcopying object (assignment)\n";
	if (this != &other)
	{
		/* this->_=other._ */
	}
	return (*this);
}

// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm:\tdestroying object\n";
}

void	ShrubberyCreationForm::beExecuted()const
{
	std::string name = (_target + "_shrubbery");
	std::ofstream output(name.c_str());


	output <<  "\033[32;1m"<< "\
		     .o00o\n\
                   o000000oo\n\
                  00000000000o\n\
                 00000000000000\n\
              oooooo  00000000  o89o\n\
           ooOOOOOOOoo  ```''  888888\n\
         OOOOOOOOOOOO'.qQQQQq. `8888'\n\
        oOOOOOOOOOO'.QQQQQQQQQQ/.88'\n\
        OOOOOOOOOO'.QQQQQQQQQQ/ /q\n\
         OOOOOOOOO QQQQQQQQQQ/ /QQ\n\
           OOOOOOOOO `QQQQQQ/ /QQ'\n\
             OO:F_P:O `QQQ/  /Q'\n\
                \\\\. \\ |  // |\n\
                d\\ \\\\\\|_////\n\
                qP| \\\\ _' `|Ob\n\
                   \\  / \\  \\Op\n\
                   |  | O| |\n\
           _       /\\. \\_/ /\\\n\
            `---__/|_\\\\   //|  __\n\
                  `-'  `-'`-'-'\n";
	output.close();
}
