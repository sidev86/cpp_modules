#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <list>
# include <algorithm>
# include <stdexcept>

class ValueNotFoundException : public std::exception 
{
	public:
		virtual const char* what() const throw() 
		{
			return "Value not found in container";
		}
};

template <typename T>
typename T::iterator easyfind(T& container, int number)
{
	typename T::iterator it = std::find(container.begin(), container.end(), number); 
	if (it != container.end())
	{
		return it;
	}
	else
	{
		throw ValueNotFoundException();
	}
}


#endif 

