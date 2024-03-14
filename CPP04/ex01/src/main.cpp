#include "main.h"
# include "../../../colors.h"

// 
int    main(void)
{
/*
 *    {
 *        print_test("Object creation");
 *        const Animal *animal = new Animal();
 *        const Animal *dog = new Dog();
 *        const Animal *cat = new Cat();
 *
 *        print_test("All object types");
 *        std::cout << animal->getType() << std::endl;
 *        std::cout << dog->getType() << std::endl;
 *        std::cout << cat->getType() << std::endl;
 *
 *        print_test("All makeSound");
 *        animal->makeSound();
 *        dog->makeSound();
 *        cat->makeSound();
 *
 *        print_test("Object deletion");
 *        delete animal;
 *        delete cat;
 *        delete dog;
 *    }
 */

	{
		Animal *dog = new Dog();

		for (int i = 0; i < 100 ; i++)
		{
			dynamic_cast<Dog*>(dog)->giveIdea("Wowza");

		}

	}
}
