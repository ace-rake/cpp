#ifndef CAT_HPP
# define CAT_HPP
#include "../main.h"

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
		/*_*/;
};

#endif
