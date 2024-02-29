#include "Zombie.hpp"
Zombie* newZombie(std::string name)                 
{                                                           
    Zombie *zombie = new Zombie;                            
	zombie->set_name(name);
    return zombie;                                          
}                                                           

Zombie*	zombieHorde(int n, std::string name)
{
	Zombie *zombies = new Zombie[n];
	for (int i = 0; i < n; ++i)
	{
		zombies[i].set_name(name);
	}
	return (zombies);

}

void	Zombie::set_name(std::string name)
{
	this->name = name;
}

Zombie::Zombie()
{
}
Zombie::~Zombie()
{
	std::cout << this->name << " has died for good\n";
}
Zombie::Zombie(std::string name)
{
	this->name = name;
}

void	Zombie::announce(){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}



void	randomChump()
{
	Zombie zombie;
	zombie.set_name("Sylvia Everhart");
	zombie.announce();
}
