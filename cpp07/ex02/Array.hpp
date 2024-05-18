/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:12:07 by sibrahim          #+#    #+#             */
/*   Updated: 2024/05/13 13:12:09 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template <typename T>
class Array 
{
	private:
		T* elements;
		unsigned int arraySize;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array& other);
		~Array();
		
		T& operator[](unsigned int idx);
		Array& operator=(const Array& other);
		
		unsigned int size() const;
};

# include "Array.tpp"

#endif
