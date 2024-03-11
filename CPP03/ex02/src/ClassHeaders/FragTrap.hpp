#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "../main.h"
// Custom class: FragTrap
class    FragTrap: public ClapTrap
{
	public:
		// Constructor
		FragTrap	(	std::string name	);

		// Copy constructor
		FragTrap	(	const FragTrap& other	);

		// Copy assignment operator overload
		FragTrap& operator = (const FragTrap& other);

		// Destructor
		~FragTrap	(	void	);

		void	highFivesGuys	(	void	);

	protected:
		;

	private:
		/*_*/;
};

#endif
