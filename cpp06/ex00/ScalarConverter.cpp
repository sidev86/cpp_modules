/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 10:50:29 by sibrahim          #+#    #+#             */
/*   Updated: 2024/05/13 10:50:31 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void error_message()
{
	std::cerr << "Error: Invalid input" << std::endl;
	exit(0);
}

void check_input(const std::string& input)
{
	 int i;
	 
	 i = 0;
	 while (input[i])
	 {
	 	if ((input[i] < '0' || input[i] > '9') && input[i] != '-' && input[i] != '.' && input[i] != 'f')
		 	error_message();
	 	else if (input[i] == '-' && i > 0)
	 		error_message();
	 	else if (input[i] == 'f' && i != (int)(input.length() - 1))
	 		error_message();
	 	i++;
	 }
}

void count_decimal_points(const std::string& input)
{
	int i; 
	int points; 
	
	i = 0;
	points = 0;
	while(input[i])
	{
		if (input[i] == '.')
			points++;
		i++;
	}
	if (points > 1)
		error_message();
}

void check_decimal_point(const std::string& input)
{
	int i;
	
	i = 0;
	count_decimal_points(input);
	while (input[i])
	{
		if (i > 0)
		{
			if (input[i] == '.' && (input[i - 1] < '0' || input[i - 1] > '9'))
				error_message();
		}
		else if (input[0] == '.')
			error_message();
		i++;
	}
}

int is_pseudo_literal(const std::string& input)
{
	return (input == "nan" || input == "nanf" || input == "-inf" || input == "+inf" || input == "-inff" || input == "+inff");
}

void print_pointed_number(const std::string& input, float& f, double& d, int& zero_dec)
{
	if (std::atof(input.c_str()) > FLT_MAX)
		std::cout << "float: +" << f << "f" << std::endl;
	else if (zero_dec)
		std::cout << "float: " << f << ".0f" << std::endl;
	else
		std::cout << "float: " << f << "f" << std::endl;
	if (std::atof(input.c_str()) > DBL_MAX)
		std::cout << "double: +" << d << std::endl;
	else if (zero_dec)
		std::cout << "double: " << d << ".0" << std::endl;
	else
		std::cout << "double: " << d << std::endl;
}

void print_no_pointed_number(const std::string& input, float& f, double& d)
{
	if (std::abs(std::atof(input.c_str())) > FLT_MAX)
	{
		if (std::atof(input.c_str()) > 0)
			std::cout << "float: +" << f << "f" << std::endl;
		else
			std::cout << "float: " << f << "f" << std::endl;	
	}
	else
		std::cout << "float: " << f << ".0f" << std::endl;
	if (std::abs(std::atof(input.c_str())) > DBL_MAX)
	{
		if (std::atof(input.c_str()) > 0)
			std::cout << "double: +" << d << std::endl;
		else
			std::cout << "double: " << d << std::endl;
	}
	else
		std::cout << "double: " << d << ".0" << std::endl;

}

void ScalarConverter::convert(const std::string& input)
{
	if (!is_pseudo_literal(input))
	{
		check_input(input);
		check_decimal_point(input);
		int int_val = std::atoi(input.c_str());
		double double_val = std::atof(input.c_str());
		
	
		char c = static_cast<char>(int_val);
		int i = static_cast<int>(int_val);  
		float f = static_cast<float>(double_val); 
		double d = static_cast<double>(double_val);
		
		int t = 0;
		int pointed = 0;
		int zero_dec = 0;
		
		if (i >= 33 && i <= 126)
			std::cout << "char: " << c << std::endl;
		else if (std::atof(input.c_str()) < -128 || std::atof(input.c_str()) > 127)
			std::cout << "char: overflow"<< std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		if (std::atof(input.c_str()) > 2147483647 || std::atof(input.c_str()) < -2147483648)
			std::cout << "int: overflow"<< std::endl;
		else
			std::cout << "int: " << i << std::endl;
		
		while (input[t])
		{
			if (input[t] == '.')
				pointed = 1;
			if (input[t] == '.' && input[t + 1] == '0' && (input[t + 2] == '\0' || input[t + 2] == 'f'))
				zero_dec = 1;
			t++;
		}
		
		if (pointed)
			print_pointed_number(input, f, d, zero_dec);
		else
			print_no_pointed_number(input, f, d);
	}
	else
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		
		if (input == "nanf" || input == "+inff" || input == "-inff")
			std::cout << "float: " << input.c_str() << std::endl;
		else 
			std::cout << "float: " << input.c_str() << "f" << std::endl;
		if (input == "nanf")
			std::cout << "double: nan" << std::endl;
		else if (input == "+inff")
			std::cout << "double: +inf" << std::endl;
		else if (input == "-inff")
			std::cout << "double: -inf" << std::endl;
		else
			std::cout << "double: " << input.c_str() << std::endl;
	}
}

