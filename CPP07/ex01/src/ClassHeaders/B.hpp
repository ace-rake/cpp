#ifndef B_HPP
# define B_HPP

// Custom class: B
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
		void	setC(char c);

		void	printC(void);
		
	protected:
		/*_*/;

	private:
		char _c;
		/*_*/;
};

#endif

