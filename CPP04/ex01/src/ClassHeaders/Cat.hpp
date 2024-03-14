#ifndef CAT_HPP
# define CAT_HPP
#include "../main.h"
#include "../ClassHeaders/Brain.hpp"

// Custom class: Cat
class    Cat : virtual public Animal
{
	public:
		// Constructor
		Cat(void);

		// Copy constructor
		Cat(const Cat& other);

		// Copy assignment operator overload
		Cat& operator = (const Cat& other);

		// Destructor
		~Cat(void);

		void	makeSound	(	void	)const;

	protected:
		;

	private:
		Brain *_brain;
		/*_*/;
};

#endif
