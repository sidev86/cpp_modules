/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 11:24:29 by sibrahim          #+#    #+#             */
/*   Updated: 2024/05/08 11:24:30 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm 
{
	private:
	    std::string _target;

	public:
	    RobotomyRequestForm( void );
	    RobotomyRequestForm(const RobotomyRequestForm& other);
	    RobotomyRequestForm(const std::string &target);
	    ~RobotomyRequestForm();
	    
	    RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
	    virtual void execute() const;
};

#endif
