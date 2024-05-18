/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:36:12 by sibrahim          #+#    #+#             */
/*   Updated: 2024/03/06 10:36:13 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class AAnimal
{
	public: 
		AAnimal( void );
		AAnimal( const AAnimal& other );
		virtual void makeSound( void ) const = 0;
		std::string getType( void ) const;
		virtual ~AAnimal( void );
		AAnimal& operator=( const AAnimal& other );
	protected:
		std::string _type;
};

#endif
