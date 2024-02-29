#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <iostream>
class Zombie
{
	private:
		std::string name;

	public:
		Zombie();
		~Zombie();
		Zombie(std::string name);
		void	announce();
		void	set_name(std::string name);


};
Zombie* newZombie (std::string name);
void	randomChump();

#endif
