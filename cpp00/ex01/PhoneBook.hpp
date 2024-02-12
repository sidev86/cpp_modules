#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <iomanip>
# include <sstream>

class PhoneBook
{
	public:
		Contact contacts[8];
		
		PhoneBook(void);
		~PhoneBook(void);	
		
		void Add(void);
		void Search(void); 
		void Exit(void);
		void ShowContactDetails(int index); 
		void PrintHeader(void);
		void PrintField (std::string str);
	private:
		static int _numOfContacts;
		static int _contactIndex;	
};

#endif
