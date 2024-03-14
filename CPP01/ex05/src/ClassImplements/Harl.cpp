#include "../main.h"

// Constructor
Harl::Harl(void)
{
	std::cout << "Harl: creating object\n";
	this->map[0].level = "debug";
	this->map[0].func = &Harl::debug;
	this->map[1].level = "info";
	this->map[1].func = &Harl::info;
	this->map[2].level = "warning";
	this->map[2].func = &Harl::warning;
	this->map[3].level = "error";
	this->map[3].func = &Harl::error;

}

// Destructor
Harl::~Harl(void)
{
	std::cout << "Harl: destroying object\n";
}

void	Harl::debug(void)
{
	std::cout << "Debug:\tI like playing minecraft" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "Info:\tWhat do you mean i've reached my daily computer limit" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "Warning:\tDad would have let me play some more minecraft" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "Error:\tThis is exactly why dad left you, mom" << std::endl;
}

void	Harl::complain(std::string level)
{
	for(int i = 0; i < 4; ++i)
		if (level == this->map[i].level)
			return (this->*map[i].func)();
	std::cout << "No such level:\t" << level << std::endl;
}
