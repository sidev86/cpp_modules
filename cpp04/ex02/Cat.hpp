/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:36:48 by sibrahim          #+#    #+#             */
/*   Updated: 2024/03/06 10:36:49 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	public:
		Cat( void );
		Cat ( const Cat& other );
		void makeSound( void ) const;	
		~Cat( void );
		Cat& operator=( const Cat& other );
	private:
		Brain* _brain;
};

#endif
