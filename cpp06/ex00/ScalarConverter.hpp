#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>
# include <string>
# include <cstdlib>
# include <climits>
# include <cfloat>

class ScalarConverter
{
	private:
		ScalarConverter();
	public: 
		static void convert(const std::string& input);
};

#endif
