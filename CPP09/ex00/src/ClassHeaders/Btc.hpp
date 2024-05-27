#ifndef BTC_HPP
# define BTC_HPP
#include "Date.hpp"
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
		float	retrieve(Date)const;
	protected:
		/*_*/;

	private:
		std::map<Date, float> _data;
		/*_*/;
};

#endif

