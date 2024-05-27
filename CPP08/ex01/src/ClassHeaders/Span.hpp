#ifndef SPAN_HPP
# define SPAN_HPP

// Custom class: Span
#include <cstddef>
#include <exception>
#include <list>
class	Span
{
	public:
		// Constructor
		Span	(	size_t	);

		// Copy constructor
		Span	(	const Span& other	);

		// Copy assignment operator overload
		Span& operator = (const Span& other);

		// Destructor
		~Span	(void);

		// Getters and Setter

		void	addNumber	(	int	);
		void	addNumberIt	(	std::list<int>::iterator begin, std::list<int>::iterator end);
		int	shortestSpan	(	void	)const;
		int	longestSpan	(	void	)const;

		class	overflow : public std::exception
	{
		public:
			virtual const char * what()const throw();
	};

		class	notEnoughValues : public std::exception
	{
		public:
			virtual const char* what()const throw();
	};

	protected:
		/*_*/;

	private:
		int *	_i;
		size_t	_n;
		size_t	_max;
		/*_*/;
};

#endif

