#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <string>
# include <map>

class BitcoinExchange
{
	public:
		BitcoinExchange();
		BitcoinExchange(const std::string& databaseFile);
		BitcoinExchange(const BitcoinExchange& other);
		~BitcoinExchange();
		
		float getBitcoinValue(const std::string& date); 
		bool dateValid(const std::string& date);
		
		BitcoinExchange &operator=(const BitcoinExchange &other);
	private:
		std::map<std::string, float> _priceDatabase; 
		void loadDatabase(const std::string& databaseFile);
}; 


#endif
