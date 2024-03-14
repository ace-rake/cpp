#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include "../main.h"

// Custom class: Brain
class    Brain
{
	public:
		// Constructor
		Brain(void);

		// Copy constructor
		Brain(const Brain& other);

		// Copy assignment operator overload
		Brain& operator = (const Brain& other);

		// Destructor
		~Brain(void);

		void	setIdeas(	std::string ideas[100]	);
		std::string	*getIdeas	(	void	);

	protected:
		;

	private:
		std::string _ideas[100];
};

#endif
