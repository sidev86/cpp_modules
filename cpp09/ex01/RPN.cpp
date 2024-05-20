#include "RPN.hpp"

#include <iostream>

RPN::RPN(const std::string& expression) : _expression(expression)
{
}


void RPN::processToken(const std::string& token) 
{
	if (isdigit(token[0])) 
	{
		int number = std::atoi(token.c_str());
		if (number > 9)
			throw std::runtime_error("Error: Invalid expression");
		stack.push(number);
	} else {
	if (stack.size() < 2) {
	    throw std::runtime_error("Error: Invalid expression");
	}

	int b = stack.top(); stack.pop();
	int a = stack.top(); stack.pop();

	if (token == "+") {
	    stack.push(a + b);
	} else if (token == "-") {
	    stack.push(a - b);
	} else if (token == "*") {
	    stack.push(a * b);
	} else if (token == "/") {
	    if (b == 0) {
		throw std::runtime_error("Error: Division by zero");
	    }
	    stack.push(a / b);
	} else {
	    throw std::runtime_error("Error: Unknown operator");
	}
	}
}

int RPN::calculate() {
    std::istringstream tokens(_expression);
    std::string token;

    while (tokens >> token) {
        processToken(token);
    }

    if (stack.size() != 1) {
        throw std::runtime_error("Error: Invalid expression");
    }

    return stack.top();
}
