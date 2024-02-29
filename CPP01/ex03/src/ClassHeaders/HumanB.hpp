#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public:
		Weapon	getWeapon();
		void	setWeapon(Weapon *weapon);

		std::string	getName();
		void		setName(std::string name);

		HumanB(std::string name);
		~HumanB();

		void	attack();

	private:
		Weapon *_weapon;
		std::string _name;

};

#endif
