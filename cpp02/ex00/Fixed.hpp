#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
		Fixed( void );
		Fixed( const Fixed& other );
		~Fixed( void );
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		
		Fixed& operator=(Fixed& other);
		
	
	private: 
		int fixed_num;
		static const int fract_bits = 8;

};
#endif
