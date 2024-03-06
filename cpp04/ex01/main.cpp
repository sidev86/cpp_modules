#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"



int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	

	delete j;//should not create a leak
	delete i;
	
	std::cout << "-------------------\n" << std::endl;
	const Animal* animals[4];
	for (int i = 0; i < 2; i++)
		animals[i] = new Dog();
	for (int i = 2; i < 4; i++)
		animals[i] = new Cat();
		
	for ( int i = 0; i < 4; i++ ) {
		delete animals[i];
	}
	
	std::cout << "-------------------\n" << std::endl;
	
	Cat cat1;
	cat1.makeSound(); 
	Cat cat2 = cat1; 
	cat2.makeSound(); 
	

	return 0;
}

