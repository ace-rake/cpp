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
		Dog *dog = new Dog();

		for (int i = 0; i < 1 ; i++)
		{
			(dog)->getBrain()->giveIdea("Wowza");
		}
		std::string *ideas = dog->getBrain()->getIdeas();

		for (int i = 0; i < 1 ; i++)
		{
			std::cout << ideas[i] << std::endl;
		}

		
		Dog *newdog = new Dog();

		ideas = newdog->getBrain()->getIdeas();
		newdog->setBrain(dog->getBrain());
		for (int i = 0; i < 1 ; i++)
		{
			std::cout << ideas[i] << std::endl;
		}


		delete newdog;
		delete dog;
	}
	{
		Cat *dog = new Cat();

		for (int i = 0; i < 1 ; i++)
		{
			(dog)->getBrain()->giveIdea("Wowza");
		}
		std::string *ideas = dog->getBrain()->getIdeas();

		for (int i = 0; i < 1 ; i++)
		{
			std::cout << ideas[i] << std::endl;
		}

		
		Cat *newdog = new Cat();

		ideas = newdog->getBrain()->getIdeas();
		newdog->setBrain(dog->getBrain());
		for (int i = 0; i < 1 ; i++)
		{
			std::cout << ideas[i] << std::endl;
		}


		delete newdog;
		delete dog;
	}
}
