/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 10:33:19 by sibrahim          #+#    #+#             */
/*   Updated: 2024/05/17 10:33:23 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main()
{
	int vec_array[] = {1, 2, 3, 4, 5};
	std::vector<int> vec(vec_array, vec_array + sizeof(vec_array) / sizeof(vec_array[0]));

	int lst_array[] = {6, 7, 8, 9, 10};
	std::list<int> lst(lst_array, lst_array + sizeof(lst_array) / sizeof(lst_array[0]));

	try 
	{
		std::vector<int>::iterator result1 = easyfind(vec, 3);
		std::cout << "Value found in vector at position: " << std::distance(vec.begin(), result1) << std::endl;
	} 
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try 
	{
		std::list<int>::iterator result2 = easyfind(lst, 9);
		std::cout << "Value found in list at position: " << std::distance(lst.begin(), result2) << std::endl;
	} 
	catch (const std::exception& e) 
	{
		std::cout << e.what() << std::endl;
	}

	try 
	{
		std::list<int>::iterator result3 = easyfind(lst, 1);
		std::cout << "Value found in list at position: " << std::distance(lst.begin(), result3) << std::endl;
	} 
	catch (const std::exception& e) 
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
