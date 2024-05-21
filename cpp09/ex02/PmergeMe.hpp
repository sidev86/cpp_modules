#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <sstream>
# include <exception>
# include <algorithm>
# include <iomanip>
# include <vector>
# include <deque>
# include <string>
# include <cstring>
# include <ctime>
# include <cmath>

class PmergeMe
{
	private: 
		std::deque<int>	_dq;
		std::vector<int> _vc;
		double _time_vc;
		double _time_dq;
		template <typename Container>
		void startSorting(Container& cont);
		template <typename Container>
		void createPairs(Container& cont);
		template <typename Container>
		void mergeInsert(Container& cont, Container& left, Container& right);
		template <typename Container>
		void printNumbers(Container& cont);
		template <typename Container>
		int binarySearch(Container& cont, int key, int low, int high);
		template <typename Container>
		void insertSorted(Container& cont, int element) ;
		bool validArguments(int argc, char **argv);
	public: 
		PmergeMe();
		PmergeMe(int argc, char **argv);
		PmergeMe(const PmergeMe& other);
		~PmergeMe();
		
		void mergeInsertionSort(int argc, char **argv);
		PmergeMe& operator=(const PmergeMe& other);
		
		class InvalidArgumentException : public std::exception {
			public:
				const char*	what() const throw();
		};

		class ArgumentsNumberException : public std::exception {
			public:
				const char*	what() const throw();
		};
};



#endif

