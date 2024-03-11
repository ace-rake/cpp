#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "../main.h"
// Custom class: DiamondTrap
class    DiamondTrap: public FragTrap, public ScavTrap
{
	public:
		// Constructor
		DiamondTrap(std::string name);

		// Copy constructor
		DiamondTrap(const DiamondTrap& other);

		// Copy assignment operator overload
		DiamondTrap& operator = (const DiamondTrap& other);

		// Destructor
		~DiamondTrap(void);

		void	setName	(	std::string name	);
		std::string	getName	(	void	)const;

		void	whoAmI	(	void	)const;
		void	attack	(	std::string target	);

	protected:
		;

	private:
		std::string _name;
		/*_*/;
};

#endif
