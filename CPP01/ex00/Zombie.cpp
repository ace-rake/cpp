#include "Zombie.hpp"
Zombie* newZombie(std::string name)                 
{                                                           
    Zombie *zombie = new Zombie;                            
	zombie->set_name(name);
    return zombie;                                          
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
