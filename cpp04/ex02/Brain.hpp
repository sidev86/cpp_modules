/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:36:41 by sibrahim          #+#    #+#             */
/*   Updated: 2024/03/06 10:36:42 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	public: 
		Brain( void );
		Brain( const Brain& other );
		~Brain( void );
		Brain& operator=( const Brain& other );
		
	private:
		std::string _ideas[100];
};

#endif
