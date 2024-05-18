/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 10:51:33 by sibrahim          #+#    #+#             */
/*   Updated: 2024/03/05 10:51:34 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"


class FragTrap : public ClapTrap
{
	public:
		FragTrap( void );
		FragTrap( const std::string& _name );
		
		void attack(const std::string& target);
		void highFivesGuys( void );
		~FragTrap( void ); 
};

#endif
