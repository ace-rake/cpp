#ifndef DATE_HPP
# define DATE_HPP

// Custom class: Date
#include <cstdlib>
#include <iostream>
#include <ostream>
#include <string>
class	Date
{
	public:
		// Constructor
		Date	(	void	);
		Date	(	std::string	);

		// Copy constructor
		Date	(	const Date& other	);

		// Copy assignment operator overload
		Date& operator = (const Date& other);

		// Equals operator overload
		bool	operator == (const Date& other)const;

		// Less than overload
		bool	operator < (const Date& other)const;

		Date &	operator ++ ();

		int operator - (const Date&other)const;

		// Destructor
		~Date	(void);

		// Getters and Setter
		
		int	getYear(void)const{return _year;}
		int	getMonth(void)const{return _month;}
		int	getDay(void)const{return _day;}
		int	getTotalDays(void)const;
		void	printDate();
	protected:
		/*_*/;

	private:
		int	_year;
		int	_month;
		int	_day;
		/*_*/;
};

std::ostream & operator << (std::ostream & o,const Date & date);

#endif
