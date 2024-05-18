/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CreateIdentify.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 10:56:03 by sibrahim          #+#    #+#             */
/*   Updated: 2024/05/13 10:56:05 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base* generate() 
{
    std::srand(static_cast<unsigned int>(std::time(NULL)));
    int randomNumber = rand() % 4;
    switch (randomNumber) 
    {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
        default:
            return NULL;
    }
}

void identify(Base* p) 
{   
    if (dynamic_cast<A*>(p) != NULL)
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p) != NULL)
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p) != NULL)
        std::cout << "C" << std::endl;
    else if (dynamic_cast<Base*>(p) != NULL)
        std::cout << "Base" << std::endl;
    else
    	std::cout << "NULL TYPE" << std::endl;
}

void identify(Base& p) 
{
    try 
    {
        identify(&p);
    } 
    catch (...) 
    {
        std::cout << "Invalid type" << std::endl;
    }
}



