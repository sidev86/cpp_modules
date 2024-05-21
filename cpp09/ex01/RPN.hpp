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
		RPN();
		RPN(const RPN& other);
		RPN(const std::string& expression);
		~RPN();
		int calculate(); 
		
		RPN& operator=(RPN const &other);
	private:
		std::string _expression;
		std::stack<int> _stack; 
		
		void processToken(const std::string& token); 

}; 

#endif

