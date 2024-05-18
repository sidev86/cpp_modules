/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 10:47:34 by sibrahim          #+#    #+#             */
/*   Updated: 2024/03/05 10:47:36 by sibrahim         ###   ########.fr       */
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
		
	
	
	private:
		std::string _name;
		int _hp;
		unsigned int _ep;
		unsigned int _damage;
	
};

#endif
