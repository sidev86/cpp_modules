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
		
		void operator=(Fixed& other)
		{
			std::cout << "Copy assignment operator called" << std::endl;
			this->fixed_num = other.getRawBits();
		}
	
	private: 
		int fixed_num;
		static const int fract_bits = 8;

};
#endif
