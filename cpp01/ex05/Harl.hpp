/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:48:48 by sibrahim          #+#    #+#             */
/*   Updated: 2024/02/22 10:48:49 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
	public:
		Harl ( void );
		~Harl ( void );
		void complain ( std::string level );
	
	private:
		void debug ( void );
		void info ( void ); 
		void warning ( void );
		void error ( void );
};

typedef	void (Harl::*t_funcptr)( void );

#endif

