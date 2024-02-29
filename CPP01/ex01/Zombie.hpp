#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <iostream>
class Zombie
{
	private:
		std::string _name;

	public:
		Zombie();
		~Zombie();
		Zombie(std::string name);
		void	announce();
		void	setName(std::string name);

};
Zombie* newZombie (std::string name);
void	randomChump();
Zombie*	zombieHorde(int n, std::string name);

#endif
