#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

// Custom class: ScalarConverter
#include <string>
enum type
{
	FLOAT,
	INT,
	DOUBLE,
	CHAR,
	LITERAL
};

enum literal
{
	PINF,
	NINF,
	NAN
};

class	ScalarConverter
{
	public:

		static	void	convert	(	std::string	);

		// Tools
		static void	printInfo(std::string str);

	protected:
		/*_*/;

	private:
		// Constructor
		ScalarConverter	(	std::string	);

		// Copy constructor
		ScalarConverter	(	const ScalarConverter& other	);

		// Copy assignment operator overload
		ScalarConverter& operator = (const ScalarConverter& other);

		// Destructor
		~ScalarConverter	(void);

		class invalid : public std::exception
		{
			virtual const char * what() const throw();
		};


		// Functions to find type
		void		whatIs();
		bool		isL	(	void	);
		bool		isC	(	void	);
		bool		isI	(	void	);
		bool		isF	(	void	);
		bool		isD	(	void	);

		// Print all conversions
		void		printConv	(	void	);
		void		printL	(	void	)const;
		void		printC		(	void	)const;
		void		printConvC	(	void	);
		void		printI		(	void	)const;
		void		printConvI	(	void	);
		void		printF		(	void	)const;
		void		printConvF	(	void	);
		void		printD		(	void	)const;
		void		printConvD	(	void	);


		/*_*/;
		const std::string _str;
		type _type;

		literal _l;
		float	_f;
		double	_d;
		int	_i;
		char	_c;

};

#endif
