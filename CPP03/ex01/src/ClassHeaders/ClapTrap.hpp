#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
// Custom class: ClapTrap
class    ClapTrap
{
	public:
		// Constructor
		ClapTrap(	std::string name	);

		// Copy constructor
		ClapTrap(const ClapTrap& other);

		// Copy assignment operator overload
		ClapTrap& operator = (const ClapTrap& other);

		// Destructor
		~ClapTrap(void);

		// Getters and Setter
		void		setName	(	std::string name	);
		std::string getName	(	void	);
		void		setHp	(	int hp	);
		int			getHp	(	void	);
		void		setEp	(	int ep	);
		int			getEp	(	void	);
		void		setAd	(	int ad	);
		int			getAd	(	void	);

		void	attack		(	const std::string& target	);	
		void	takeDamage	(	unsigned int amount	);
		void	beRepaired	(	unsigned int amount	);
		bool	isDead		(	void	);
		bool	noEnergy	(	void	);
		bool	cantFunction(	void	);

	private:
		/*_*/;
		std::string _name;
		int	_hp;
		int	_ep;
		int	_ad;
};

#endif
