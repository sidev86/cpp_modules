#include "Span.hpp"

Span::Span() : _numbers(0)
{
}

Span::Span(unsigned int N) : _N(N)
{

}

Span::Span(const Span& other) : _N(other._N), _numbers(other._numbers)
{
	
}

Span::~Span()
{

}

void Span::addNumber(int num)
{
	if (this->_numbers.size() >= this->_N)
	{
		throw FullContainerException();
	}
	this->_numbers.push_back(num);
}

int Span::shortestSpan()
{
	if (this->_numbers.size() <= 1)
	{
		throw ShortestSpanException();
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
		throw LongestSpanException();
	}
	std::sort(this->_numbers.begin(), this->_numbers.end());
        return this->_numbers.back() - this->_numbers.front();
}


void Span::addNumbers(unsigned int count) 
{
	if (this->_numbers.size() + count > this->_N) 
	{
	    throw FullContainerException();
	}

	srand(time(NULL));

	for (int i = 0; i < (int)count; i++) 
	{
	    int randomNum;
	    do 
	    {
		randomNum = rand() % 100;
	    } 
	    while (std::find(this->_numbers.begin(), this->_numbers.end(), randomNum) != this->_numbers.end());
	    
	    this->_numbers.push_back(randomNum);
	}
}


void Span::printNumbers()
{
	for (int i = 0; i < (int)this->_numbers.size(); i++)
	{
		std::cout << this->_numbers[i] << std::endl;
	}
}

const Span&	Span::operator=(const Span& other)
{
	if (this != &other)
	{
		this->_N = other._N;
		this->_numbers = other._numbers;
	}
	return (*this);
}


const char* Span::FullContainerException::what() const throw() 
{
    return "Cannot add numbers! Container is full";
}

const char* Span::ShortestSpanException::what() const throw() 
{
    return "Cannot find shortest span. Too few numbers";
}

const char* Span::LongestSpanException::what() const throw() 
{
    return "Cannot find longest span. Too few numbers";
}



