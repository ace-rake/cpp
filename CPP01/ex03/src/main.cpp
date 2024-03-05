#include "main.h"
#include "../../../colors.h"
int	main(){

	std::cout << std::endl << BRIGHT_BLUE << ULINE << "TEST:\tCreate weapon sword" << RESET << std::endl;
	Weapon weapon = Weapon("Sword");

	std::cout << std::endl << BRIGHT_BLUE << ULINE << "TEST:\tCreate HumanA Willy with weapon sword" << RESET << std::endl;
	HumanA Willy("Willy",weapon);
	
	std::cout << std::endl << BRIGHT_BLUE << ULINE << "TEST:\tAttack with Willy" << RESET << std::endl;
	Willy.attack();

	std::cout << std::endl << BRIGHT_BLUE << ULINE << "TEST:\tCreate HumanB Seymour" << RESET << std::endl;
	HumanB Skinner("Seymour");

	std::cout << std::endl << BRIGHT_BLUE << ULINE << "TEST:\tAttack with Seymour" << RESET << std::endl;
	Skinner.attack();

	std::cout << std::endl << BRIGHT_BLUE << ULINE << "TEST:\tGive Seymour a weapon and attack with it" << RESET << std::endl;
	Skinner.setWeapon(&weapon);
	Skinner.attack();


	std::cout << std::endl << BRIGHT_BLUE << ULINE << "TEST:\tChange Sword to Spear" << RESET << std::endl;
	weapon.setType("Spear");


	std::cout << std::endl << BRIGHT_BLUE << ULINE << "TEST:\tAttack with both Willy and Seymour" << RESET << std::endl;
	Willy.attack();
	Skinner.attack();
}
