#include "Zombie.hpp"
Zombie* newZombie(std::string name)                 
{                                                           
    Zombie *zombie = new Zombie;                            
	zombie->setName(name);
    return zombie;                                          
}                                                           

Zombie*	zombieHorde(int n, std::string name)
{
	Zombie *zombies = new Zombie[n];
	for (int i = 0; i < n; ++i)
	{
		zombies[i].setName(name);
	}
	return (zombies);

}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

Zombie::Zombie()
{
}
Zombie::~Zombie()
{
	std::cout << this->_name << " has died for good\n";
}
Zombie::Zombie(std::string name)
{
	this->_name = name;
}

void	Zombie::announce(){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}



void	randomChump()
{
	Zombie zombie;
	zombie.setName("Sylvia Everhart");
	zombie.announce();
}
