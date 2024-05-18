/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 10:54:05 by sibrahim          #+#    #+#             */
/*   Updated: 2024/03/05 10:54:07 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main() 
{
	// Testing DiamondTrap
	{
		DiamondTrap diamond1("Diamond 1");
		DiamondTrap diamond2("Diamond 2");
		
		
		diamond1.whoAmI();
		diamond2.whoAmI();
		
		diamond1.attack("X");
		diamond2.takeDamage(10);
		diamond2.getHealthPoints();
		diamond2.beRepaired(5);
	}
	return 0;
}
