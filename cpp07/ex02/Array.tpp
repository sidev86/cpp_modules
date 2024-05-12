#ifndef ARRAY_TPP
# define ARRAY_TPP

# include "Array.hpp"
template<typename T>
Array<T>::Array() : elements(NULL), arraySize(0)
{
}

template<typename T>
Array<T>::Array(unsigned int n) : arraySize(n) 
{
	elements = new T[arraySize];
}

template<typename T>
Array<T>::Array(const Array& other) : arraySize(other.arraySize) 
{
	elements = new T[arraySize];
	for (unsigned int i = 0; i < arraySize; ++i) 
	{
	    elements[i] = other.elements[i];
	}
}

template<typename T>
Array<T>::~Array() 
{
	delete[] elements;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& other) 
{
	if (this != &other) 
	{
		delete[] elements;
		arraySize = other.arraySize;
		elements = new T[arraySize];
		for (unsigned int i = 0; i < arraySize; ++i) 
		{
			elements[i] = other.elements[i];
		}
	}
	return *this;
}

template<typename T>
T& Array<T>::operator[](unsigned int index) 
{
	if (index >= arraySize) 
	{
	    throw std::out_of_range("Index out of range");
	}
	return elements[index];
}

template<typename T>
unsigned int Array<T>::size() const 
{
	return arraySize;
}


#endif
