#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
// Custom class: WrongAnimal
class    WrongAnimal
{
	public:
		// Constructor
		WrongAnimal(void);

		// Copy constructor
		WrongAnimal(const WrongAnimal& other);

		// Copy assignment operator overload
		WrongAnimal& operator = (const WrongAnimal& other);

		// Destructor
		~WrongAnimal(void);
		std::string getType	(	void	)const;
		void		setType	(	std::string type	);

		void	makeSound	(	void	)const;

	protected:
		std::string type;
		;

	private:
		/*_*/;
};

#endif
