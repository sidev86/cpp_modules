#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template <typename T>
class Array 
{
	private:
		T* elements;
		unsigned int arraySize;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array& other);
		~Array();
		
		T& operator[](unsigned int idx);
		Array& operator=(const Array& other);
		
		unsigned int size() const;
};

# include "Array.tpp"

#endif
