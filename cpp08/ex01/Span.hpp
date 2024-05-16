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
		Span();
		Span(unsigned int N);
		Span(const Span& other);
		~Span();
		
		const Span&	operator=(const Span& other);
		void addNumber(int num);
		int shortestSpan();
		int longestSpan();
		void addNumbers(unsigned int count);
		void printNumbers();
		
		class FullContainerException : public std::exception
		{
			virtual const char* what() const throw();
		};
		
		class ShortestSpanException : public std::exception
		{
			virtual const char* what() const throw();
		};
		
		class LongestSpanException : public std::exception
		{
			virtual const char* what() const throw();
		};

}; 



#endif
