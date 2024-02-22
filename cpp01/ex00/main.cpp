/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:43:58 by sibrahim          #+#    #+#             */
/*   Updated: 2024/02/22 10:44:00 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *heapZombie;
	
	heapZombie = newZombie("Frank");
	heapZombie->announce();
	
	randomChump("Oski");
	
	delete (heapZombie);
}
