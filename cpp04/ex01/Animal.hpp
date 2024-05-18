/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:33:14 by sibrahim          #+#    #+#             */
/*   Updated: 2024/03/06 10:33:15 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	public: 
		Animal( void );
		Animal( const Animal& other );
		virtual void makeSound( void ) const;
		std::string getType( void ) const;
		virtual ~Animal( void );
		Animal& operator=( const Animal& other );
	protected:
		std::string _type;
			
	
};

#endif
