#include "Zombie.hpp"

/*
 *Zombie* Zombie::newZombie(std::string name)
 *{
 *    Zombie *zombie = new Zombie;
 *    zombie->name = name;
 *
 *    return (zombie);
 *}
 */

int	main(void)
{
	Zombie *zombie = newZombie("foo");

	  zombie->announce();
	  randomChump();
	   delete zombie;
	   
}
