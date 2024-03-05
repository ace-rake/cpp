#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "../main.h"

class HumanA
{
	public:
		Weapon	getWeapon();
		void	setWeapon(Weapon weapon);

		std::string	getName();
		void		setName(std::string name);

		HumanA(std::string name, Weapon& weapon);
		~HumanA();

		void	attack();


	private:
		Weapon &_weapon;
		std::string _name;

};

#endif
