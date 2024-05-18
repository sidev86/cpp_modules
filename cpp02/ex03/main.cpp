/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 10:21:02 by sibrahim          #+#    #+#             */
/*   Updated: 2024/02/26 10:21:03 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main( void ) 
{ 
	int in_triangle = 0;
	Point a(2.0f, 2.0f);
	Point b(5.0f, 2.0f);
	Point c(3.5f, 5.0f);
	Point z(3.0f, 3.9f);

	in_triangle = bsp(a, b, c, z);
	
	std::cout << in_triangle << std::endl;
	if(in_triangle)
		std::cout << "Point is inside triangle" << std::endl;
	else
		std::cout << "Point is outside triangle OR on one vertex OR on one edge of the triangle" << std::endl;
	
	return 0; 
}


