/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:37:01 by sibrahim          #+#    #+#             */
/*   Updated: 2024/03/06 10:37:02 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
	public:
		Dog( void );
		Dog( const Dog& other );
		void makeSound( void ) const;
		~Dog( void );
		Dog& operator=( const Dog& other );
	private:
		Brain* _brain;
};

#endif
