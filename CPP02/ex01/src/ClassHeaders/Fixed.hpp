#ifndef FIXED_HPP
# define FIXED_HPP
#include "../main.h"
// Custom class: Fixed
class    Fixed
{
	public:
		// Constructor
		Fixed	(	void	);
		Fixed	(	const int raw	);
		Fixed	(	const float value	);

		// Copy constructor
		Fixed	(	const Fixed& other	);

		// Copy assignment operator overload
		Fixed&	operator =	(	const Fixed& other	);


		// Destructor
		~Fixed	(	void	);

		int		getRawBits	(	void	);
		void	setRawBits	(	const int raw	);
		float	toFloat		(	void	);
		int		toInt		(	void	);

	protected:
		;

	private:
		/*_*/;
		int	_value;
		static const int _fBits = 8;
};

std::ostream&	operator <<	(	std::ostream& os, Fixed &other);
#endif
