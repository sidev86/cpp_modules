/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 11:11:25 by sibrahim          #+#    #+#             */
/*   Updated: 2024/05/08 11:11:27 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() 
{
	Bureaucrat bureaucrat("John", 81);
        Form form("Tax Form", 80, 80);
        std::cout << bureaucrat << std::endl;
        bureaucrat.incrementGrade();
        std::cout << "After increment: " << bureaucrat << std::endl;
        bureaucrat.decrementGrade();
        std::cout << "After decrement: " << bureaucrat << std::endl;

        std::cout << "Form before signing: " << form << std::endl;
        bureaucrat.signForm(form);
        std::cout << "Form after signing: " << form << std::endl;

        Bureaucrat bureaucrat2("Bob", 140);
        std::cout << bureaucrat2 << std::endl;
        bureaucrat2.incrementGrade(); 
	return 0;
}
