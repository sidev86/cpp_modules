/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 10:55:55 by sibrahim          #+#    #+#             */
/*   Updated: 2024/05/13 10:55:57 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <cstdlib>
# include <ctime>
# include <string>

class NoType : public std::exception 
{ 
    virtual const char* what() const throw();
};

class Base 
{
	public:
	    virtual ~Base() {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base*	generate();
void	identify(Base* p);
void	identify(Base& p);

#endif
