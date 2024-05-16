#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <iterator>
# include <vector>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public: 
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator rev_iterator;
		
		MutantStack();
		MutantStack(const MutantStack& other); 
		~MutantStack();
		const MutantStack&	operator=(const MutantStack& other);
		
		iterator	begin() { return this->c.begin(); }
		iterator	end()	{ return this->c.end(); }
		rev_iterator rbegin() { return this->c.rbegin(); }
		rev_iterator rend() { return this->c.rend(); }
};


# include "MutantStack.tpp"

#endif
