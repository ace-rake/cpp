#ifndef DOG_HPP
# define DOG_HPP
#include "../main.h"
#include "../ClassHeaders/Brain.hpp"

// Custom class: Dog
class    Dog : virtual public Animal
{
	public:
		// Constructor
		Dog(void);

		// Copy constructor
		Dog(const Dog& other);

		// Copy assignment operator overload
		Dog& operator = (const Dog& other);

		// Destructor
		~Dog(void);

		void	makeSound	(	void	)const;

		Brain	*getBrain	(	void	)const;
		void	setBrain	(	Brain *brain	);
		void	giveIdea	(	std::string idea	);

	protected:
		;

	private:
		Brain *_brain;
		/*_*/;
};

#endif
