/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 11:14:40 by sibrahim          #+#    #+#             */
/*   Updated: 2024/05/08 11:14:43 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() 
{
    try {
        Bureaucrat bureaucrat("John", 50);
        std::cout << "Bureaucrat: " << bureaucrat << std::endl;

        
        ShrubberyCreationForm shrubberyForm("albero");
        std::cout << "Shrubbery Creation Form: " << shrubberyForm.getAFormName() << std::endl;

       
        RobotomyRequestForm robotomyForm("target");
        std::cout << "Robotomy Request Form: " << robotomyForm.getAFormName() << std::endl;

        
        PresidentialPardonForm pardonForm("criminal");
        std::cout << "Presidential Pardon Form: " << pardonForm.getAFormName() << std::endl;

      
        bureaucrat.signForm(shrubberyForm);
        bureaucrat.executeForm(shrubberyForm);

      
        bureaucrat.signForm(robotomyForm);
        bureaucrat.executeForm(robotomyForm);
        bureaucrat.executeForm(robotomyForm);

      
        bureaucrat.signForm(pardonForm);
        bureaucrat.executeForm(pardonForm);

    } 
    catch (const std::exception& e) 
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
