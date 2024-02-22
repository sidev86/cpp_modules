/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:45:14 by sibrahim          #+#    #+#             */
/*   Updated: 2024/02/22 10:45:16 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *horde;
	int i = 0;
	int num_zombies = 10;
	horde = zombieHorde(num_zombies, "Frank");
	
	while (i < num_zombies)
	{
		horde[i].announce();
		i++;
	}
	delete [] horde;
}
