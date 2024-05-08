/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 11:12:21 by sibrahim          #+#    #+#             */
/*   Updated: 2024/05/08 11:12:22 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm 
{
	private:
	    std::string _target;

	public:
	    ShrubberyCreationForm( void );
	    ShrubberyCreationForm(const ShrubberyCreationForm& other);
	    ShrubberyCreationForm(const std::string &target);
	    ~ShrubberyCreationForm();
	    
	    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
	    virtual void execute() const;
};

#endif
