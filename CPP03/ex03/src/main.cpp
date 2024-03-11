#include "main.h"
#include "../../../colors.h"

// 
int    main(void)
{
/*
 *
 *    {
 *        print_test("Create and destroy");
 *        {
 *            ClapTrap clap("Foo");
 *        }
 *
 *        print_test("Attack");
 *        {
 *            ClapTrap clap("Foo");
 *            ClapTrap dead("DeadTrap");
 *            clap.attack("you");
 *            clap.setAd(9001);
 *            for (int i = 0; i < 15; i++)
 *                clap.attack("you");
 *            dead.takeDamage(999999);
 *            dead.attack("you");
 *        }
 *
 *        print_test("Take damage");
 *        {
 *            ClapTrap clap("Foo");
 *            for (int i = 0; i < 6; i++)
 *                clap.takeDamage(2);
 *            clap.attack("You");
 *            clap.beRepaired(20);
 *        }
 *
 *        print_test("Be repaired");
 *        {
 *            ClapTrap clap("Foo");
 *            ClapTrap dead("DeadTrap");
 *            for(int i = 0; i < 12 ; i++)
 *                clap.beRepaired(3);
 *            dead.takeDamage(999999);
 *            dead.beRepaired(20);
 *        }
 *    }
 *
 *    {
 *        print_test("Scavtrap test start");
 *        {
 *            ScavTrap clap("Foo");
 *            ScavTrap dead("DeadTrap");
 *            clap.attack("you");
 *            clap.setAd(9001);
 *            for (int i = 0; i < 15; i++)
 *                clap.attack("you");
 *            dead.takeDamage(999999);
 *            dead.attack("you");
 *        }
 *        print_test("Guarding the gate");
 *        {
 *            ScavTrap scav("Foo");
 *            scav.guardGate();
 *            scav.guardGate();
 *            scav.setGuardingGate(false);
 *            scav.guardGate();
 *            scav.guardGate();
 *        }
 *    }
 *
 *    {
 *        print_test("Fragtrap");
 *        FragTrap fraggy("fraglet");
 *        fraggy.highFivesGuys();
 *    }
 *
 */
	{
		print_test("DiamondTrap");
		std::cout << std::endl;
		DiamondTrap deez("nutz");
		std::cout << std::endl;
		DiamondTrap copy(deez);
		std::cout << copy.getHp() << std::endl;
		deez.setHp(50);
		std::cout << copy.getHp() << std::endl;

		std::cout << std::endl;
		DiamondTrap ass = deez;
		std::cout << ass.getHp() << std::endl;
		deez.setHp(100);
		std::cout << ass.getHp() << std::endl;

		std::cout << std::endl;
		deez.getName();
	}
}
