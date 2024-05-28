#ifndef BTC_HPP
# define BTC_HPP
#include "Date.hpp"
#include <exception>
#include <map>
// Custom class: Btc
class	Btc
{
	public:
		// Constructor
		Btc	(	void	);

		// Copy constructor
		Btc	(	const Btc& other	);

		// Copy assignment operator overload
		Btc& operator = (const Btc& other);

		// Destructor
		~Btc	(void);

		// Getters and Setter

		void	printData(void)const;
		void	printData(Date)const;
		float	retrieve(std::string)const;
		class	invalidValue: public std::exception
	{
		public:
			virtual const char * what()const throw();
	};
	protected:
		/*_*/;

	private:
		std::map<Date, float> _data;
		/*_*/;
};

#endif

