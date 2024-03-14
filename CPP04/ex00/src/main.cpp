#include "main.h"
# include "../../../colors.h"

// 
int    main(void)
{
	print_test("Object creation");
	const Animal *animal = new Animal();
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();

	print_test("All object types");
	std::cout << animal->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;

	print_test("All makeSound");
	animal->makeSound();
	dog->makeSound();
	cat->makeSound();

	print_test("Object deletion");
	delete animal;
	delete cat;
	delete dog;

	print_test("Wrong");
	const WrongAnimal *wcat = new WrongCat();
	wcat->makeSound();
	delete wcat;
}
