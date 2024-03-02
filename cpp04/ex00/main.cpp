#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl; 
	j->makeSound();
	std::cout << i->getType() << " " << std::endl; 
	i->makeSound(); //will output the cat sound! 
	std::cout << meta->getType() << " " << std::endl; 
	meta->makeSound();
	
	delete meta; 
	delete i; 
	delete j;
	std::cout << "\n\n\n";
	
	const WrongAnimal *wrongAnimal = new WrongAnimal();
	const WrongAnimal *wrongCat = new WrongCat();

	std::cout << wrongAnimal->getType() << " " << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl;
	wrongAnimal->makeSound();
	wrongCat->makeSound();

	delete  wrongAnimal;
	delete  wrongCat;

}
