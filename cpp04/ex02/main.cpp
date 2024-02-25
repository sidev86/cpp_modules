#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"



int main()
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	//const AAnimal* a = new AAnimal();

	delete j;//should not create a leak
	delete i;

	const AAnimal* animals[10];
	for (int i = 0; i < 5; i++)
		animals[i] = new Dog();
	for (int i = 5; i < 10; i++)
		animals[i] = new Cat();
		
	for ( int i = 0; i < 10; i++ ) {
	delete animals[i];
	}

	return 0;
}

