#ifndef ARRAY_HPP
# define ARRAY_HPP

// Custom class: Array
template<class T>
class	Array
{
	public:
		// Constructor
		Array	(	void	);
		Array	(	T	);

		// Copy constructor
		Array	(	const Array& other	);

		// Copy assignment operator overload
		Array& operator = (const Array& other);

		// Destructor
		~Array<T>	(void);

		// Getters and Setter

	protected:
		/*_*/;

	private:
		T _var;
		/*_*/;
};

#endif
