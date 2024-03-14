#ifndef DOG_HPP
# define DOG_HPP
#include "../main.h"

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

	protected:
		;

	private:
		/*_*/;
};

#endif
