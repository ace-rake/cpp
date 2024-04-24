#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

// Custom class: ScalarConverter
#include <string>
enum type
{
	FLOAT,
	INT,
	DOUBLE,
	CHAR
};
class	ScalarConverter
{
	public:

		// Copy assignment operator overload
		ScalarConverter& operator = (const ScalarConverter& other);

		// Destructor
		~ScalarConverter	(void);

		// Getters and Setter

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

		// To get the correct type
		void		whatIs();

		// Char stuff
		bool		isC	(	void	);

		// Int stuff
		bool		isI	(	void	);

		// Float
		bool		isF	(	void	);
		void		convertF(	void	);

		// Double
		bool		isD	(	void	);
		void		convertD(	void	);

		/*_*/;
		const std::string _str;
		type _type;

		float	_f;
		double	_d;
		int	_i;
		char	_c;

};

#endif
