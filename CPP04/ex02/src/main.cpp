#include "main.h"
# include "../../../colors.h"

// 
int    main(void)
{
/*
 *    {
 *        print_test("Object creation");
 *        //const Animal *animal = new Animal();
 *        const Animal *dog = new Dog();
 *        const Animal *cat = new Cat();
 *
 *        print_test("All object types");
 *        //std::cout << animal->getType() << std::endl;
 *        std::cout << dog->getType() << std::endl;
 *        std::cout << cat->getType() << std::endl;
 *
 *        print_test("All makeSound");
 *        //animal->makeSound();
 *        dog->makeSound();
 *        cat->makeSound();
 *
 *        print_test("Object deletion");
 *        //delete animal;
 *        delete cat;
 *        delete dog;
 *    }
 */

	{
		print_test("create doggo");
		Dog *dog = new Dog();
		
		print_test("give doggo idea");
		for (int i = 0; i < 1 ; i++)
		{
			(dog)->getBrain()->giveIdea("Wowza");
		}

		print_test("print out ideas");
		std::string *ideas = dog->getBrain()->getIdeas();

		for (int i = 0; i < 1 ; i++)
		{
			std::cout << ideas[i] << std::endl;
		}

		print_test("creating new doggo and giving him same ideas");	
		Dog *newdog = new Dog();

		ideas = newdog->getBrain()->getIdeas();
		newdog->setBrain(dog->getBrain());
		for (int i = 0; i < 1 ; i++)
		{
			std::cout << ideas[i] << std::endl;
		}


		print_test("Deep copy test");

		Dog tmp = *dog;
		ideas = tmp.getBrain()->getIdeas();

		for (int i = 0; i < 1 ; i++)
		{
			std::cout << ideas[i] << std::endl;
		}
		print_test("other Deep copy test");

		Dog *other = new Dog(*dog);
		ideas = other->getBrain()->getIdeas();

		for (int i = 0; i < 1 ; i++)
		{
			std::cout << ideas[i] << std::endl;
		}

		print_test("destroy objects");
		delete other;
		delete newdog;
		delete dog;
	}
	{
		print_test("gato test");
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
