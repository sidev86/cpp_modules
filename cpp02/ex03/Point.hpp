/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 10:20:48 by sibrahim          #+#    #+#             */
/*   Updated: 2024/02/26 10:20:50 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"


class Point
{
	public:
		Point( void );
		
		Point( const float x, const float y );
		Point( const Point& other );
		
		const Point& operator=( const Point& other ) const;
		Fixed getX() const { return _x; }
    		Fixed getY() const { return _y; }
		~Point( void );
	
	
	private:
		Fixed const _x;
		Fixed const _y;




};
bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif
