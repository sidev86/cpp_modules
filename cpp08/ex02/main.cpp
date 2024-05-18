/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 10:34:33 by sibrahim          #+#    #+#             */
/*   Updated: 2024/05/17 10:34:35 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

void	stackIter(void) 
{
	std::cout << "<<< INT STACK WITH NORMAL ITERATOR (SUBJECT TEST) >>>" << std::endl;
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	
	std::cout << "top value -> "<< mstack.top() << std::endl;
	std::cout << "removing 1 element from stack..." << std::endl;
	mstack.pop();
	std::cout << "stack size -> " << mstack.size() << std::endl;
	
	mstack.push(3); 
	mstack.push(5); 
	mstack.push(737);
	mstack.push(0);
	
	
	MutantStack<int>::iterator it = mstack.begin(); 
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	while (it != ite) 
	{
		std::cout << *it << std::endl;
		++it; 
	}
	std::stack<int> s(mstack); 
}

void	stackReverseIter(void)
{
	std::cout << "<<< INT STACK WITH REVERSE ITERATOR >>>" << std::endl;
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	
	std::cout << "top value -> "<< mstack.top() << std::endl;
	std::cout << "removing 1 element from stack..." << std::endl;
	mstack.pop();
	std::cout << "stack size -> " << mstack.size() << std::endl;
	
	mstack.push(3); 
	mstack.push(5); 
	mstack.push(737);
	mstack.push(0);
	
	MutantStack<int>::rev_iterator rit = mstack.rbegin(); 
	MutantStack<int>::rev_iterator rite = mstack.rend();
	
	++rit;
	--rit;
	while (rit != rite) 
	{
		std::cout << *rit << std::endl;
		++rit; 
	}
	std::stack<int> s(mstack); 
}

void	listIter(void) {
	std::cout << "<<< LIST ITERATOR (SHOULD BE SAME AS STACK ITERATOR) >>>"<< std::endl;
	std::list<int>	list;

	list.push_back(5);
	list.push_back(17);

	std::cout << "first list element -> " << list.back() << std::endl;
	std::cout << "removing 1 element from list..." << std::endl;
	list.pop_back();
	std::cout << "list size -> " << list.size() << std::endl;

	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	list.push_back(0);

	std::list<int>::iterator it = list.begin();
	std::list<int>::iterator ite = list.end();

	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::list<int>	l(list);
}

void	listReverseIter(void) 
{
	std::cout << "<<< LIST REVERSE ITERATOR (SHOULD BE SAME AS STACK REVERSE) >>>"<< std::endl;
	std::list<int>	list;

	list.push_back(5);
	list.push_back(17);

	std::cout << "first list element -> " << list.back() << std::endl;
	std::cout << "removing 1 element from list..." << std::endl;
	list.pop_back();
	std::cout << "list size -> " << list.size() << std::endl;

	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	list.push_back(0);

	std::list<int>::reverse_iterator rit = list.rbegin();
	std::list<int>::reverse_iterator rite = list.rend();

	++rit;
	--rit;
	while (rit != rite) {
		std::cout << *rit << std::endl;
		++rit;
	}
	std::list<int>	l(list);
}

int	main(void) 
{
	stackIter();
	listIter();
	stackReverseIter();
	listReverseIter();
	return (0);
}
