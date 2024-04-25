#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
// Custom class: Animal
class    Animal
{
	public:

		// Copy assignment operator overload
		Animal& operator = (const Animal& other);

		// Destructor
		virtual ~Animal(void);

		std::string getType	(	void	)const;
		void		setType	(	std::string type	);

		virtual void	makeSound	(	void	)const = 0;
	protected:
		std::string type;
		// Constructor
		Animal(void);

		// Copy constructor
		Animal(const Animal& other);
		;

	private:
		/*_*/;
};

#endif
