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
		std::string getName	(	void	)const;
		void		setHp	(	int hp	);
		int			getHp	(	void	)const;
		void		setEp	(	int ep	);
		int			getEp	(	void	)const;
		void		setAd	(	int ad	);
		int			getAd	(	void	)const;

		void	attack		(	const std::string& target	);
		void	takeDamage	(	unsigned int amount	);
		void	beRepaired	(	unsigned int amount	);
		bool	isDead		(	void	)const;
		bool	noEnergy	(	void	)const;
		bool	cantFunction(	void	)const;

	protected:
		/*_*/;
		std::string _name;
		int	_hp;
		int	_ep;
		int	_ad;
};

#endif
