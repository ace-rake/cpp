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
	   

	   int i = 5;
	   Zombie *horde = zombieHorde(i, "Wola");

	   for(int j = 0; j < i; j++)
	   {
		   horde[j].announce();
	   }
	   delete[] horde;
}

