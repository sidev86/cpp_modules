/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:48:21 by sibrahim          #+#    #+#             */
/*   Updated: 2024/02/22 10:48:23 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		*argv = *argv;
		std::string filename = argv[1];
		std::string r_filename = filename + ".replace";
		
		std::ifstream inputFile(filename.c_str());
		
		if (!inputFile)
		{
			std::cerr << "Cannot open input file" << std::endl;
			return 1;
		}
		
		std::ofstream outputFile(r_filename.c_str());
		
		if (!outputFile)
		{
			std::cerr << "Cannot create output file" << std::endl;
			return 1;
		}
		
		std::string line;
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		
		while (std::getline(inputFile, line))
		{
			size_t pos = 0;
			
			while ((pos = line.find(s1, pos)) != std::string::npos)
			{
				line.erase(pos, s1.length());
				line.insert(pos, s2);
				pos += s2.length();
			
			}
			outputFile << line << std::endl;
		}
		
		inputFile.close();
		outputFile.close();
	}
	else
		std::cout << "Error: wrong number of arguments.\nArguments to pass must be: filename, string1(occurrence), string2(substitution)" << std::endl;
	

	return (0);

}
