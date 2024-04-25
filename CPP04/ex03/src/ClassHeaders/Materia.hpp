#ifndef MATERIA_HPP
# define MATERIA_HPP

#include <string>
#include <iostream>
#include "AMateria.hpp"
// Custom class: Materia
class	Materia:public AMateria
{
	public:
		// Constructor
		Materia	(	void	);

		// Copy constructor
		Materia	(	const Materia& other	);

		// Copy assignment operator overload
		Materia& operator = (const Materia& other);

		// Destructor
		~Materia	(void);

		AMateria* clone() const = 0;
		void use(ICharacter& target);

	protected:
		/*_*/;
};

#endif

