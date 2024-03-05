#include "Zombie.hpp"
#include "../../colors.h"

int	main(void)
{
	std::cout << std::endl << BRIGHT_BLUE << ULINE << "TEST:\tCreating zombie foo" << RESET << std::endl;
	Zombie *zombie = newZombie("foo");

	std::cout << std::endl << BRIGHT_BLUE << ULINE << "TEST:\tAnnouncing zombie foo" << RESET << std::endl;
	zombie->announce();

	std::cout << std::endl << BRIGHT_BLUE << ULINE << "TEST:\tRandom chump" << RESET << std::endl;
	randomChump();

	std::cout << std::endl << BRIGHT_BLUE << ULINE << "TEST:\tDeleting zombie foo" << RESET << std::endl;
	delete zombie;
}
