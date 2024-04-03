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
		Fixed	(	const float raw	);

		// Copy constructor
		Fixed	(	const Fixed& other	);

		// Copy assignment operator overload
		Fixed&	operator =	(	const Fixed& other	);


		// Comparison operator overload
		// Eq assignment operator overload
		bool	operator == (	Fixed& that	)const;
		// Not eq assignment operator overload
		bool	operator != (	Fixed& that	)const;
		// Bigger than assignment operator overload
		bool	operator > (	Fixed& that	)const;
		// Smaller than assignment operator overload
		bool	operator < (	Fixed& that	)const;
		// Smaller or eq assignment operator overload
		bool	operator <= (	Fixed& that	)const;
		// Bigger or eq assignment operator overload
		bool	operator >= (	Fixed& that	)const;

		// Arithmetic operators
		// *
		Fixed	operator * (	Fixed& that	)const;
		// /
		Fixed	operator / (	Fixed& that	)const;
		// -
		Fixed	operator - (	Fixed& that	)const;
		// +
		Fixed	operator + (	Fixed& that	)const;

		// Increment operator overload
		Fixed& operator ++ ();
		Fixed operator ++ (int);
		Fixed& operator -- ();
		Fixed operator -- (int);


		// Destructor
		~Fixed	(	void	);

		int		getRawBits	(	void	)const;
		void	setRawBits	(	const int raw	);
		float	toFloat		(	void	)const;
		int		toInt		(	void	)const;
		static Fixed&	min	(	Fixed& a, Fixed& b	);
		static const Fixed&	min	(	const Fixed& a, const Fixed& b	);
		static Fixed&	max	(	Fixed& a, Fixed& b	);
		static const Fixed&	max	(	const Fixed& a, const Fixed& b	);

	private:
		/*_*/;
		int	_value;
		static const int _fBits = 8;
};

std::ostream&	operator <<	(	std::ostream& os, const Fixed &other);

#endif
