#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <map>
#include <functional>

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
		std::map<std::string, void (Harl::*)()> map;

};

#endif
