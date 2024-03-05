#include "Zombie.hpp"
Zombie* newZombie(std::string name)                 
{                                                           
    Zombie *zombie = new Zombie;                            
	zombie->set_name(name);
	std::cout << name << ":\tis ready to roll" << std::endl;
    return zombie;                                          
}                                                           

void	Zombie::set_name(std::string name)
{
	if (this->name.empty())
		std::cout << "A zombie:\thas been renamed to " << name << std::endl;
	else
		std::cout << this->name << ":\thas been renamed to " << name << std::endl;
	this->name = name;
}

Zombie::Zombie()
{
	std::cout << "A zombie:\thas risen from the dead and will be staying in the cementary" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name << ":\thas died for good\n";
}
Zombie::Zombie(std::string name)
{
	this->name = name;
}

void	Zombie::announce(){
	std::cout << this->name << ":\tBraiiiiiiinnnzzzZ..." << std::endl;
}



void	randomChump()
{
	Zombie zombie;
	zombie.set_name("Sylvia Everhart");
	zombie.announce();
}
