#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
// Custom class: Ice
class	Ice: public AMateria
{
	public:
		// Constructor
		Ice	(	void	);

		// Copy constructor
		Ice	(	const Ice& other	);

		// Copy assignment operator overload
		Ice& operator = (const Ice& other);

		// Destructor
		~Ice	(void);

		
		std::string const & getType() const; //Returns the materia type;
		Ice* clone() const;
		void use(ICharacter& target);

	private:
	
};

#endif
