#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;

	// Test adding many numbers at once
	Span sp2 = Span(100);
	sp2.addNumbers(100);
	std::cout << "Shortest span after adding more numbers: " << sp2.shortestSpan() << std::endl;
	std::cout << "Longest span after adding more numbers: " << sp2.longestSpan() << std::endl;

	return 0;
}
