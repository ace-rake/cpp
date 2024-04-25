#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <string>
#include <iostream>
#include "IMateriaSource.hpp"
// Custom class: MateriaSource
class	MateriaSource : public IMateriaSource
{
	public:
		// Constructor
		MateriaSource	(	void	);

		// Copy constructor
		MateriaSource	(	const MateriaSource& other	);

		// Copy assignment operator overload
		MateriaSource& operator = (const MateriaSource& other);

		// Destructor
		~MateriaSource	(void);

		//print inventory
		void	printInventory	(	void	)const;

		void	learnMateria	(	AMateria * m	);
		AMateria*	createMateria	(	std::string const & type);

	private:
		AMateria *(_inventory[4]);
};

#endif

