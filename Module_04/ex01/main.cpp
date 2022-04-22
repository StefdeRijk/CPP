#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int	main(void)
{
	const Animal	*meta[10];
	const Dog 		*meta_dog;
	const Dog		*copy_dog;

	for (int i = 0; i < 5; i++)
		meta[i] = new Dog();
	for (int i = 5; i < 10; i++)
		meta[i] = new Cat();

	std::cout << std::endl;

	meta_dog = new Dog();
	copy_dog = new Dog(*meta_dog);
	std::cout << copy_dog->getType() << std::endl;
	copy_dog->makeSound();

	std::cout << std::endl;

	meta_dog->setIdeas("Meta ideas");
	copy_dog->setIdeas("Copy ideas");

	std::cout << meta_dog->getIdea() << std::endl;
	std::cout << copy_dog->getIdea() << std::endl;
	
	delete meta_dog;
	delete copy_dog;

	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
		delete meta[i];

	system("leaks Brain");
	return 0;
}
