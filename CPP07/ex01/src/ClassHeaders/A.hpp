#ifndef A_HPP
# define A_HPP

// Custom class: A
class	A
{
	public:
		// Constructor
		A	(	void	);
		A	(	int	);

		// Copy constructor
		A	(	const A& other	);

		// Copy assignment operator overload
		A& operator = (const A& other);

		// Destructor
		~A	(void);

		// Getters and Setter
		void	setI(int i);
		int	getI();

		void	incrementI	(	void	);

	protected:
		/*_*/;

	private:
		int	_i;
		/*_*/;
};

#endif

