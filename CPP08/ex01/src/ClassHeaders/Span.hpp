#ifndef SPAN_HPP
# define SPAN_HPP

// Custom class: Span
#include <cstddef>
#include <exception>
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
		int	shortestSpan	(	void	)const;
		int	longestSpan	(	void	)const;

		class	overflow : public std::exception
		{
			public:
				virtual char * what()const throw()
				{
					return (char *)"Already full";
				}
		};
		
		class	notEnoughValues : public std::exception
	{
		public:
			virtual char* what()const throw()
			{
				return (char *)"not enough values";
			}
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

