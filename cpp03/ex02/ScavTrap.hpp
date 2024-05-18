/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 10:52:55 by sibrahim          #+#    #+#             */
/*   Updated: 2024/03/05 10:52:56 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
	public:
		ScavTrap( void );
		ScavTrap( const std::string& _name );
		//ScavTrap(ScavTrap& other);
		
		void attack(const std::string& target);
		void guardGate( void );
		~ScavTrap( void ); 
};

#endif
