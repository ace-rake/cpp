#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"
// Custom class: Character
class	Character : public ICharacter
{
	public:
		// Constructor
		Character	(	void	);
		Character	(	std::string name	);

		// Copy constructor
		Character	(	const Character& other	);

		// Copy assignment operator overload
		Character& operator = (const Character& other);

		// Destructor
		~Character	(void);

		// Getters and Setter
		std::string const &getName	(	void	) const;

		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		
	private:
		AMateria (*_inventory[4]);
		std::string const _name;
};

#endif

