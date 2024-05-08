/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 11:31:29 by sibrahim          #+#    #+#             */
/*   Updated: 2024/05/08 11:31:30 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() 
{
 
}

Intern::Intern( const Intern& other ) 
{
    *this = other;
}

Intern::~Intern() {}



AForm *Intern::makeForm(const std::string &formName, const std::string &target) 
{
	std::string formNames[] = {"Robotomy Request", "Presidential Pardon", "Shrubbery Creation"};
	AForm*    forms[] = {
	new RobotomyRequestForm( target ),
	new PresidentialPardonForm( target ),
	new ShrubberyCreationForm( target )
	};

	for ( int i(0); i < 3; i++ ) 
	{
		if ( formName == formNames[i] ) 
		{
		    std::cout << "Intern creates " << formName << std::endl;
		    return forms[i];
		}
	}
	std::cout << "Intern cannot create " << formName << " form" << std::endl;
	return NULL;
}

Intern& Intern::operator=( const Intern& other ) 
{
    ( void ) other;
    return (*this);
}
