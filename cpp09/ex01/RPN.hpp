#ifndef RPN_HPP
# define RPN_HPP

# include <string>
# include <stack>
# include <cstdlib>
# include <sstream>
# include <stdexcept>

class RPN 
{
	public:
		RPN(const std::string& expression);
		int calculate(); 
	private:
		std::string _expression;
		std::stack<int> stack; 
		
		
		void processToken(const std::string& token); 

}; 

#endif

