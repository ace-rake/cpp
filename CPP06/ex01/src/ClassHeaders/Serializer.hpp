#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

// Custom struct: data
#include <stdint.h>
typedef struct	Data
{
	int	int_data;
	char	char_data;
}		Data;

// Custom class: Serializer
class	Serializer
{
	public:

		static uintptr_t	serialize	(	Data *	);
		static Data * 		deserialize	(	uintptr_t	);

	protected:
		/*_*/;

	private:
		// Constructor
		Serializer	(	void	);

		// Copy constructor
		Serializer	(	const Serializer& other	);

		// Copy assignment operator overload
		Serializer& operator = (const Serializer& other);

		// Destructor
		~Serializer	(void);


		/*_*/;
};

#endif

