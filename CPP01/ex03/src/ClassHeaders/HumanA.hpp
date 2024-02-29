#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	public:
		Weapon	getWeapon();
		void	setWeapon(Weapon weapon);

		std::string	getName();
		void		setName(std::string name);

		HumanA(Weapon weapon);
		~HumanA();


	private:
		Weapon weapon;
		std::string name;

};

#endif
