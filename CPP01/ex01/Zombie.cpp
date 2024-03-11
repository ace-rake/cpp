#include "Zombie.hpp"
Zombie* newZombie(std::string name)                 
{                                                           
    Zombie *zombie = new Zombie;                            
	zombie->setName(name);
	std::cout << name << ":\tis ready to roll" << std::endl;
    return zombie;                                          
}                                                           

Zombie*	zombieHorde(int n, std::string name)
{
	Zombie *zombies = new Zombie[n];
	for (int i = 0; i < n; ++i)
		zombies[i].setName(name);
	return (zombies);
}

void	Zombie::setName(std::string name)
{
	if (this->_name.empty())
		std::cout << "A zombie:\thas been renamed to " << name << std::endl;
	else
		std::cout << this->_name << ":\thas been renamed to " << name << std::endl;
	this->_name = name;
}

Zombie::Zombie()
{
	std::cout << "A zombie:\thas risen from the dead and will be staying in the cementary" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << ":\thas died for good\n";
}
Zombie::Zombie(std::string name)
{
	this->_name = name;
}

void	Zombie::announce(){
	std::cout << this->_name << ":\tBraiiiiiiinnnzzzZ..." << std::endl;
}



void	randomChump()
{
	Zombie zombie;
	zombie.setName("Sylvia Everhart");
	zombie.announce();
}
