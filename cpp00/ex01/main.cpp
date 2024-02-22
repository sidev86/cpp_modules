/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:30:21 by sibrahim          #+#    #+#             */
/*   Updated: 2024/02/12 10:30:23 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "PhoneBook.hpp"

int	main()
{
	PhoneBook pb;
	std::string command;
	system("cls || clear");
	while(1)
	{
		std::cout << "               ** COOL SKETCHY PHONEBOOK **" << std::endl;
		std::cout << std::endl;
		std::cout << "COMMAND LIST:"<< std::endl;
		std::cout << "1. 'ADD' to insert a new contact in the address book" << std::endl;
		std::cout << "2. 'SEARCH' to search for a contact among existing ones" << std::endl;
		std::cout << "3. 'EXIT' terminate PhoneBook" << std::endl;	
		std::cout << "\nType the command you want to execute and press Enter: ";
		std::getline(std::cin, command);
		
		if (command == "ADD")
			pb.Add();	
		else if (command == "SEARCH")
			pb.Search();
		else if (command == "EXIT")
		{
			std::cout << "Exit from Phonebook..." << std::endl;
			exit(0);
		}
		else
			std::cout << "Command not found" << std::endl;
	}
	return 0;
}
