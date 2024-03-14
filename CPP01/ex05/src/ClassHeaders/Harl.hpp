#ifndef HARL_HPP
# define HARL_HPP

#include "../main.h"
#include <string>
#include <map>
#include <functional>
class Harl;

typedef struct	s_map
{
	std::string level;
	void (Harl::*func)(void);

}				t_map;

// Custom class: Harl
class    Harl
{
	public:
		// Constructor
		Harl	(	void	);

		// Destructor
		~Harl	(	void	);

		void	complain	(	std::string level	);

	protected:
		;

	private:
		/*_*/;
		void	debug	(	void	);
		void	info	(	void	);
		void	warning	(	void	);
		void	error	(	void	);
		t_map map[4];
	

};


#endif
