#ifndef BTC_HPP
# define BTC_HPP
#include "Date.hpp"
#include <map>
#include <string>
// Custom class: Btc
class	Btc
{
	public:
		// Constructor
		Btc	(	void	);
		Btc	(	std::string	);

		// Copy constructor
		Btc	(	const Btc& other	);

		// Copy assignment operator overload
		Btc& operator = (const Btc& other);

		// Destructor
		~Btc	(void);

		// Getters and Setter

		void	printData(void)const;
		void	printData(Date)const;
		float	retrieve(Date)const;
		float	retrieve(std::string)const;
	protected:
		/*_*/;

	private:
		std::map<Date, float> _data;
		/*_*/;
};

#endif

