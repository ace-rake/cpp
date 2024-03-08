#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "../main.h"
// Custom class: ScavTrap
class    ScavTrap : public ClapTrap
{
	public:
		// Constructor
		ScavTrap(std::string name);

		// Copy constructor
		ScavTrap(const ScavTrap& other);

		// Copy assignment operator overload
		ScavTrap& operator = (const ScavTrap& other);

		// Destructor
		~ScavTrap(void);

	protected:
		;

	private:
		;
};

#endif
