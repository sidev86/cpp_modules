/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 10:49:13 by sibrahim          #+#    #+#             */
/*   Updated: 2024/03/05 10:49:15 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	public:
		ClapTrap( void );
		ClapTrap( std::string name ); 
		ClapTrap( const ClapTrap& other );
		~ClapTrap( void );
		void attack( const std::string& target );  
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );
		void setDamage(const int damage);
		int getDamage( void );
		int getHealthPoints( void );
		int getEnergyPoints( void );
		std::string getName( void );
		ClapTrap& operator=( const ClapTrap& other );
	
	
	protected:
		std::string _name;
		int _hp;
		int _ep;
		int _damage;
	
};

#endif
