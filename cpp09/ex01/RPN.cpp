#include "RPN.hpp"

#include <iostream>


RPN::RPN()
{
}

RPN::RPN(const std::string& expression) : _expression(expression)
{
}

RPN::RPN(const RPN& other)
{
	*this = other;
}

RPN::~RPN()
{
}

RPN &RPN::operator=(RPN const &other) 
{
	if (this != &other)
	{
		this->_stack = other._stack;
	}
	return *this;
}

void RPN::processToken(const std::string& token) 
{
	if (isdigit(token[0])) 
	{
		int number = std::atoi(token.c_str());
		if (number > 9)
			throw std::runtime_error("Error: Invalid expression");
		_stack.push(number);
	} 
	else 
	{
		if (_stack.size() < 2) 
		{
			throw std::runtime_error("Error: Invalid expression");
		}

		int b = _stack.top(); _stack.pop();
		int a = _stack.top(); _stack.pop();

		if (token == "+")
			_stack.push(a + b);
		else if (token == "-")
			_stack.push(a - b);
		else if (token == "*")
			_stack.push(a * b);
		else if (token == "/") 
		{
			if (b == 0) 
			{
				throw std::runtime_error("Error: Division by zero");
			}
			_stack.push(a / b);
		} 
		else 
		{
		    throw std::runtime_error("Error: Unknown operator");
		}
	}
}

int RPN::calculate() 
{
	std::istringstream tokens(_expression);
	std::string token;

	while (tokens >> token) 
	{
		processToken(token);
	}
	if (_stack.size() != 1) 
	{
		throw std::runtime_error("Error: Invalid expression");
	}
	return _stack.top();
}
