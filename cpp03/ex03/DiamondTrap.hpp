/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 10:54:27 by sibrahim          #+#    #+#             */
/*   Updated: 2024/03/05 10:54:28 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap 
{
	public:
		DiamondTrap( std::string name ); 
		~DiamondTrap( void );
		using ScavTrap::attack;
		
		void whoAmI( void );
		
	private:
		std::string _name;	
};

#endif
