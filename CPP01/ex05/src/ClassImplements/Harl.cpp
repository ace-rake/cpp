#include "../main.h"

// Constructor
Harl::Harl(void)
{
	std::cout << "Harl: creating object\n";
	map["debug"] = &Harl::debug;
	map["warning"] = &Harl::warning;
	map["info"] = &Harl::info;
	map["error"] = &Harl::error;
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
	auto func = map.find(level);
	if (func != map.end())
		(this->*(func->second))();
	else
		std::cout << "No such command: " << level << std::endl;
}
