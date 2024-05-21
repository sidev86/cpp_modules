#include "RPN.hpp"
#include <iostream>


int main(int argc, char* argv[]) 
{
	if (argc != 2) 
	{
		std::cerr << "Usage: " << argv[0] << " \"expression\"" << std::endl;
		return 1;
	}
	try 
	{
		RPN rpn(argv[1]);
		int result = rpn.calculate();
		std::cout << result << std::endl;
	} 
	catch (const std::exception& e) 
	{
		std::cerr << e.what() << std::endl;
		return 1;
	}
	return 0;
}
