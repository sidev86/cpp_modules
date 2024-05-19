#include "BitcoinExchange.hpp"

#include <fstream>
#include <sstream> 
#include <iostream>
#include <cstdlib>

BitcoinExchange::BitcoinExchange(const std::string& databaseFile)
{
	loadDatabase(databaseFile);
}



bool BitcoinExchange::dateValid(const std::string& date)
{
	int	year; 
	int	month;
	int	day;
	int		months_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	if (date.length() < 8 || date.at(4) != '-' || date.at(7) != '-')
	{
		return (false);
	}
	std::istringstream(date.substr(0, 4)) >> year;
	std::istringstream(date.substr(5, 2)) >> month;
	std::istringstream(date.substr(8, 2)) >> day;
	
	bool	leapYear = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
	
	if (leapYear)
		months_days[1] = 29;
	if (year < 2000|| year > 9999)
		return (false);
	if (month < 1 || month > 12)
		return (false);
	if (day < 1 || day > months_days[month - 1])
		return (false);
	return (true);
}

void BitcoinExchange::loadDatabase(const std::string& databaseFile)
{
	float price; 
	
	std::ifstream file(databaseFile.c_str());
	if (!file.is_open() || file.fail())
	{
		std::cerr << "Error: could not open database file." << std::endl;
        	exit(0);
	}
	std::string line;
	while (std::getline(file, line)) 
	{
		if (!line.compare("date,exchange_rate"))
			continue;
		std::istringstream si(line);
		std::string date;
		if (std::getline(si, date, ',') && si >> price) 
		{
		    this->_priceDatabase[date] = price;
		}
	}
	file.close();
}



float BitcoinExchange::getBitcoinValue(const std::string &date)
{
	std::map<std::string, float>::iterator it = this->_priceDatabase.find(date);
	if (it != this->_priceDatabase.end()) 
	{
		return it->second;
	} 
	else 
	{
		it = this->_priceDatabase.lower_bound(date);

		if (it == this->_priceDatabase.begin()) 
		{
		    std::cerr << "Error: no previous date found in database." << std::endl;
		    return -1.0f;
		}

		if (it != this->_priceDatabase.end() && it->first != date) 
		{
		    --it;
		}
		return it->second;
	}
}
