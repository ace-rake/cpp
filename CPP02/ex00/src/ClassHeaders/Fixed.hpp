#ifndef FIXED_HPP
# define FIXED_HPP

// Custom class: Fixed
class    Fixed
{
	public:
		// Constructor
		Fixed	(	void	);

		// Copy constructor
		Fixed	(	const Fixed& other	);

		// Copy assignment operator overload
		Fixed& operator = (	const Fixed& other	);

		// Destructor
		~Fixed	(	void	);

		int		getRawBits	(	void	);
		void	setRawBits	(	const int raw	);

	protected:
		;

	private:
		/*_*/;
		int	_value;
		static const int _fBits = 8;
};

#endif
