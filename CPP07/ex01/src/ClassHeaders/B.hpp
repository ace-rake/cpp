#ifndef B_HPP
# define B_HPP

// Custom class: B
#include <iostream>
class	B
{
	public:
		// Constructor
		B	(	void	);

		// Copy constructor
		B	(	const B& other	);

		// Copy assignment operator overload
		B& operator = (const B& other);

		// Destructor
		~B	(void);

		// Getters and Setter
		void	setC(char c){_c = c;}

		void	printC(void){std::cout << _c << std::endl;}
		
	protected:
		/*_*/;

	private:
		char _c;
		/*_*/;
};

#endif

