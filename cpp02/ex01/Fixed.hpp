#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed( void );
		Fixed(const int int_num);
		Fixed(const float float_num);
		Fixed( const Fixed& other );
		~Fixed( void );
		
		float toFloat( void ) const;
		int toInt( void ) const;
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		
		Fixed& operator=(const Fixed& other)
		{
			std::cout << "Copy assignment operator called" << std::endl;
			if (this != &other)
				this->_fixed_num = other.getRawBits();
			//std::cout << "fixednum = " << this->_fixed_num << std::endl; 
			return *this;
		}
		
	private: 
		int _fixed_num;
		static const int _fract_bits = 8;

};

std::ostream& operator<<(std::ostream& COUT, Fixed const & fixed);
#endif
