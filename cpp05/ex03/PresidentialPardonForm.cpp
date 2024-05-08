/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 11:23:58 by sibrahim          #+#    #+#             */
/*   Updated: 2024/05/08 11:24:00 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :  AForm("Presidential Pardon Form", 25, 5), _target("none") 
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("Presidential Pardon Form", 25, 5), _target(target) 
{
}


PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm("Presidential Pardon Form", 25, 5)
{
	this->_target = other._target;
}


PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) 
{
	if (this != &other) 
	{
		this->_target = other._target;
	}
	return *this;
}


PresidentialPardonForm:: ~PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute() const 
{
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
