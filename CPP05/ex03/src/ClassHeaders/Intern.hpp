#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include <string>
class Intern;
typedef struct s_map
{
	std::string	key;
	AForm * (Intern::*func)(const std::string &)const;   
;
}		t_map;
// Custom class: Intern
class	Intern
{
	public:
		// Constructor
		Intern	(	void	);

		// Copy constructor
		Intern	(	const Intern& other	);

		// Copy assignment operator overload
		Intern& operator = (const Intern& other);

		// Destructor
		~Intern	(void);

		// Getters and Setter


		AForm * makeForm	(	const std::string form, const std::string & target	)const;
		AForm * robo_req	(	const std::string & target	)const;
		AForm * pres_req	(	const std::string & target	)const;
		AForm * shrub_req	(	const std::string & target	)const;
		
	protected:
		/*_*/;

	private:
		t_map map[3];
		/*_*/;
};

#endif

