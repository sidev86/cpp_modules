/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 10:16:38 by sibrahim          #+#    #+#             */
/*   Updated: 2024/02/26 10:16:40 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
