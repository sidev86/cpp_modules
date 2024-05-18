/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 10:50:22 by sibrahim          #+#    #+#             */
/*   Updated: 2024/03/05 10:50:24 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() 
{
    // Testing ClapTrap
    {
        ClapTrap claptrap("ClapTrap1");
        claptrap.setDamage(3);
        claptrap.attack("Target1");
        claptrap.takeDamage(5);
        claptrap.beRepaired(3);
        claptrap.attack("Target1");
    }

    std::cout << std::endl;

    // Testing ScavTrap
    {
        ScavTrap scavtrap("ScavTrap1");
        scavtrap.attack("Target2");
        scavtrap.takeDamage(5);
        scavtrap.beRepaired(10);
        scavtrap.attack("Target2");
        scavtrap.guardGate();
    }

    return 0;
}
