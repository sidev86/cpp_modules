#include "ScalarConverter.hpp"
#include <string>
#include <cstdlib>
#include <climits>
#include <cfloat>

void check_input(const std::string& input)
{
	 int i;
	 
	 i = 0;
	 while (input[i])
	 {
	 	if ((input[i] < '0' || input[i] > '9') && input[i] != '-' && input[i] != '.')
	 	{
	 		std::cerr << "Error: Invalid input" << std::endl;
	 		exit(0);
	 	}
	 	else if (input[i] == '-' && i > 0)
	 	{
	 		std::cerr << "Error: Invalid inputs" << std::endl;
	 		exit(0);
	 	}
	 	i++;
	 }
}

void check_decimal_point(const std::string& input)
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
	{
		std::cerr << "Error: Invalid input" << std::endl;
		exit(0);
	}
	i = 0;
	while (input[i])
	{
		if (i > 0)
		{
			if (input[i] == '.' && (input[i - 1] < '0' || input[i - 1] > '9'))
			{
				std::cerr << "Error: Invalid input" << std::endl;
				exit(0);
			}
		}
		else if (input[0] == '.')
		{
			std::cerr << "Error: Invalid input" << std::endl;
			exit(0);
		}
		i++;
	}

}
int is_pseudo_literal(const std::string& input)
{
	return (input == "nan" || input == "nanf" || input == "-inf" || input == "+inf" || input == "-inff" || input == "+inff");
}

void ScalarConverter::convert(const std::string& input)
{
	try 
	{
		if (!is_pseudo_literal(input))
		{
			check_input(input);
			check_decimal_point(input);
			int int_val = std::atoi(input.c_str());
			float float_val = std::atof(input.c_str());
			double double_val = std::atof(input.c_str());
		
			char c = static_cast<char>(int_val); // Per ottenere il primo carattere della stringa
			int i = static_cast<int>(int_val);  // Converti in int
			float f = static_cast<float>(float_val); // Converti in float
			double d = static_cast<double>(double_val);
			
			int t = 0;
			int pointed = 0;
			
			std::cout << "double max = " << DBL_MAX << std::endl; 
			if (int_val >= 33 && int_val <= 126)
				std::cout << "char: " << c << std::endl;
			else if (std::atof(input.c_str()) || std::atof(input.c_str()) > 127)
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
				t++;
			}
			if (pointed)
			{
				if (std::atof(input.c_str()) > FLT_MAX)
					std::cout << "float: +" << f << "f" << std::endl;
				else
					std::cout << "float: " << f << "f" << std::endl;
				if (std::atof(input.c_str()) > DBL_MAX)
					std::cout << "double: +" << d << std::endl;
				else
					std::cout << "double: " << d << std::endl;
			}
			else
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
		}
		else
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: " << input.c_str() << "f" << std::endl;
			std::cout << "double: " << input.c_str() << std::endl;
		}
	} 
	catch (const std::exception& e) 
	{
		std::cerr << "Errore durante la conversione: " << e.what() << std::endl;
	}
}

