#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "../main.h"
// Custom class: WrongCat
class    WrongCat : public WrongAnimal
{
	public:
		// Constructor
		WrongCat(void);

		// Copy constructor
		WrongCat(const WrongCat& other);

		// Copy assignment operator overload
		WrongCat& operator = (const WrongCat& other);

		// Destructor
		~WrongCat(void);

		void	makeSound	(	void	)const;

	protected:
		;

	private:
		/*_*/;
};

#endif
