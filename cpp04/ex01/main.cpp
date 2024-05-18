/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:33:55 by sibrahim          #+#    #+#             */
/*   Updated: 2024/03/06 10:33:57 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"



int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	

	delete j;
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

