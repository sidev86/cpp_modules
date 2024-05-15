#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <vector>
# include <algorithm>
# include <stdexcept>
class Span
{
	private: 
		unsigned int _N;
		std::vector<int> _numbers; 
		
	
	public:
		Span(unsigned int N);
		~Span();
		void addNumber(int num);
		int shortestSpan();
		int longestSpan();
		void addNumbers(unsigned int count);

}; 



#endif
