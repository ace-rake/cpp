#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
// Custom class: Animal
class    Animal
{
	public:
		// Constructor
		Animal(void);

		// Copy constructor
		Animal(const Animal& other);

		// Copy assignment operator overload
		Animal& operator = (const Animal& other);

		// Destructor
		virtual ~Animal(void);

		std::string getType	(	void	)const;
		void		setType	(	std::string type	);

		virtual void	makeSound	(	void	)const;
	protected:
		std::string type;
		;

	private:
		/*_*/;
};

#endif
