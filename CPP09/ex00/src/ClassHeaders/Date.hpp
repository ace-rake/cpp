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
		bool	operator == (const Date& other)const
		{
			if (	_year == other._year &&
				_month == other._month &&
				_day == other._day)
				return (true);
			return false;
		};

		// Less than overload
		bool	operator < (const Date& other)const
		{
			if (_year < other._year)
				return true;
			else if (_year > other._year)
				return false;
			if (_month < other._month)
				return true;
			else if (_month > other._month)
				return false;
			if (_day < other._day)
				return true;
			return false;
		}
		Date &	operator ++ ()
		{
			if (++_day > 31)
			{
				_day = 1;
				if (++_month > 12)
				{
					_month = 1;
					_year++;
				}
			}
			return *this;
		}

		int operator - (const Date&other)const
		{
			return (abs(this->getTotalDays() - other.getTotalDays()));
		}

		// Destructor
		~Date	(void);

		// Getters and Setter
		
		int	getYear(void)const{return _year;}
		int	getMonth(void)const{return _month;}
		int	getDay(void)const{return _day;}
		int	getTotalDays(void)const
		{
			return (_year * 372) + (_month * 31) + _day;
		}
		void	printDate()
		{
			std::cout << "Year:month:day" <<
				_year << "," <<
				_month<< "," <<
				_day << std::endl;
		}
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
