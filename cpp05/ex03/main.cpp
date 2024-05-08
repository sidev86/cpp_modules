/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 11:23:15 by sibrahim          #+#    #+#             */
/*   Updated: 2024/05/08 11:23:17 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() 
{
    Intern intern;

    
    AForm *shrubberyForm = intern.makeForm("Shrubbery Creation", "home");
    if (shrubberyForm != NULL) {
        std::cout << "Intern creates " << shrubberyForm->getAFormName() << std::endl;
        delete shrubberyForm;
    }

    AForm *robotomyForm = intern.makeForm("Robotomy Request", "target");
    if (robotomyForm != NULL) {
        std::cout << "Intern creates " << robotomyForm->getAFormName() << std::endl;
        delete robotomyForm;
    }

    AForm *pardonForm = intern.makeForm("Presidential Pardon", "criminal");
    if (pardonForm != NULL) {
        std::cout << "Intern creates " << pardonForm->getAFormName() << std::endl;
        delete pardonForm;
    }

    
    AForm *unknownForm = intern.makeForm("Unknown Form", "target");
    if (unknownForm == NULL) {
        std::cout << "Unable to create unknown form" << std::endl;
    }

    return 0;
}

