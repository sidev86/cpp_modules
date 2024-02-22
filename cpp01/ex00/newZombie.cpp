/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:44:16 by sibrahim          #+#    #+#             */
/*   Updated: 2024/02/22 10:44:18 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie ( std::string name )
{
	Zombie *heapZombie = new Zombie;
	heapZombie->setName(name);
	return (heapZombie);
}
