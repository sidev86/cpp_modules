/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 11:23:29 by sibrahim          #+#    #+#             */
/*   Updated: 2024/05/08 11:23:30 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include "AForm.hpp"

class Intern 
{
	public:
	    Intern();
	    ~Intern();
	    Intern(const Intern &other);
	    Intern &operator=(const Intern &other);

	    AForm *makeForm(const std::string &formName, const std::string &target);
	    
};

#endif


