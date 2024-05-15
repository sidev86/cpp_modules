#include "Span.hpp"

Span::Span(unsigned int N) : _N(N)
{

}

void Span::addNumber(int num)
{
	if (this->_numbers.size() >= this->_N)
	{
		throw std::runtime_error("Cannot add more numbers. Container is full");
	}
	this->_numbers.push_back(num);
}

int Span::shortestSpan()
{
	if (this->_numbers.size() <= 1)
	{
		throw std::runtime_error("Cannot find shortest span. Too few numbers");
	}
	std::sort(this->_numbers.begin(), this->_numbers.end()); 
	int minSpan = this->_numbers[1] - this->_numbers[0];
	for (int i = 2; i < (int)this->_numbers.size(); i++) 
	{
            int span = this->_numbers[i] - this->_numbers[i - 1];
            if (span < minSpan) 
            {
                minSpan = span;
            }
        }
        return minSpan;
}



int Span::longestSpan()
{
	if (this->_numbers.size() <= 1)
	{
		throw std::runtime_error("Cannot find shortest span. Too few numbers");
	}
	std::sort(this->_numbers.begin(), this->_numbers.end());
        return this->_numbers.back() - this->_numbers.front();
}


void Span::addNumbers(unsigned int count) 
{
	if (this->_numbers.size() + count > this->_N) 
	{
	    throw std::overflow_error("Cannot add more numbers, Span would exceed its capacity");
	}

	srand(time(NULL));

	for (int i = 0; i < (int)count; i++) 
	{
	    int randomNum;
	    do 
	    {
		randomNum = rand() % 100000;
	    } 
	    while (std::find(this->_numbers.begin(), this->_numbers.end(), randomNum) != this->_numbers.end());
	    
	    this->_numbers.push_back(randomNum);
	}
}


Span::~Span()
{

}

