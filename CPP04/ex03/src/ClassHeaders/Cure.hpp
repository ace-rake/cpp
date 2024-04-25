#ifndef CURE_HPP
# define CURE_HPP
#include <iostream>
#include <string>
#include "AMateria.hpp"
// Custom class: Cure
class	Cure: public AMateria
{
	public:
		// Constructor
		Cure	(	void	);

		// Copy constructor
		Cure	(	const Cure& other	);

		// Copy assignment operator overload
		Cure& operator = (const Cure& other);

		// Destructor
		~Cure	(void);

		// Getters and Setter

		std::string const & getType() const; //Returns the materia type;
		Cure* clone() const;
		void use(ICharacter& target);

	protected:
		/*_*/;
	private:
};

#endif

