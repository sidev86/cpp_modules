/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:09:08 by sibrahim          #+#    #+#             */
/*   Updated: 2024/05/13 13:09:11 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>

template< typename T >
T const & max( T const & x, T const & y)
{
	if (x >= y)
		return x; 
	else 
		return y;
}

template< typename T >
T const & min( T const & x, T const & y)
{
	if (x <= y)
		return x; 
	else 
		return y;
}

template< typename T >
void swap(T & x, T & y) 
{
    T temp = x;
    x = y;
    y = temp;
}


#endif
