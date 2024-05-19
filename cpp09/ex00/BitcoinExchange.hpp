#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <string>
# include <map>

class BitcoinExchange
{
	public:
		BitcoinExchange(const std::string& databaseFile);
		float getBitcoinValue(const std::string& date); 
		bool dateValid(const std::string& date);
	private:
		std::map<std::string, float> _priceDatabase; 
		void loadDatabase(const std::string& databaseFile);
}; 


#endif
