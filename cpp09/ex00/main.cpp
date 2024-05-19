#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <string>


int main(int argc, char *argv[]) 
{
	if (argc != 2) 
	{
		std::cerr << "Usage: " << argv[0] << " <input file>" << std::endl;
		return 1;
	}

	std::string inputFileName = argv[1];
	std::ifstream inputFile(inputFileName.c_str());
	if (!inputFile.is_open()) 
	{
		std::cerr << "Error: could not open input file." << std::endl;
		return 1;
	}

	BitcoinExchange exchange("data.csv");

	std::string line;
	while (std::getline(inputFile, line)) 
	{
		std::istringstream si(line);
		std::string date;
		
		float value;
		if (!line.compare("date | value"))
				continue;
		if (std::getline(si, date, '|') && si >> value) 
		{
			date = date.substr(0, date.find(' '));
			
			if (!exchange.dateValid(date))
			{
				std::cerr << "Error: invalid date" << std::endl;
			}
			else if (value >= 0 && value <= 1000)
			{
				float bitcoinValue = exchange.getBitcoinValue(date);
				if (bitcoinValue != -1.0f)
					std::cout << date << " => " << value << " = " << value * bitcoinValue << std::endl;

			} 
			else 
			{
				std::cerr << "Error: invalid value " << value << " on date " << date << std::endl;
			}	
		} 
		else 
		{
			std::cerr << "Error: invalid line format: " << line << std::endl;
		}
	}
	inputFile.close();

	return 0;
}
