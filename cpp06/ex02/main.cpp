/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 10:56:19 by sibrahim          #+#    #+#             */
/*   Updated: 2024/05/13 10:56:21 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
	Base *cl = new Base();
	Base *cl2 = generate();
	identify(cl);
	identify(cl2);
	
	delete cl;
	delete cl2;
}
