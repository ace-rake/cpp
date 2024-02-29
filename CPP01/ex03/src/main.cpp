#include "ClassHeaders/HumanB.hpp"
#include "ClassHeaders/HumanA.hpp"
#include "ClassHeaders/Weapon.hpp"
int	main(){

	Weapon weapon = Weapon("Sword");

	HumanA Willy("Willy",weapon);
	Willy.attack();

	HumanB Skinner("Seymour");
	Skinner.attack();
	Skinner.setWeapon(&weapon);
	Skinner.attack();

	weapon.setType("Spear");

	Willy.attack();
	Skinner.attack();
}
