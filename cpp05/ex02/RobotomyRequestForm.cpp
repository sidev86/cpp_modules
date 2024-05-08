/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 11:12:56 by sibrahim          #+#    #+#             */
/*   Updated: 2024/05/08 11:12:58 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request Form", 72, 45), _target("none") 
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("Robotomy Request Form", 72, 45), _target(target) 
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm("Robotomy Request Form", 72, 45)
{
	this->_target = other._target;
}


RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) 
{
	if (this != &other) 
	{
		this->_target = other._target;
	}
	return *this;
}


RobotomyRequestForm:: ~RobotomyRequestForm()
{
}


void RobotomyRequestForm::execute() const 
{
    std::cout << "Making drilling noises..." << std::endl;
    if (rand() % 2 == 0) 
    {
        std::cout << _target << " has been robotomized successfully" << std::endl;
    } 
    else 
    {
        std::cout << "Robotomy failed for " << _target << std::endl;
    }
}
