#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

// Custom class: AMateria
class	AMateria
{
	protected:
		const std::string _type;
;
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(AMateria const & that);
		virtual ~AMateria();

		void	setType(std::string type);
		std::string const & getType() const; //Returns the materia type;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
