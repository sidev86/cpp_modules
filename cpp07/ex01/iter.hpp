/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:11:23 by sibrahim          #+#    #+#             */
/*   Updated: 2024/05/13 13:11:25 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template <typename T, typename Func>
void iter(T* array, int length, Func func) 
{
    for (int i = 0; i < length; ++i) 
    {
        func(array[i]);
    }
}



#endif
