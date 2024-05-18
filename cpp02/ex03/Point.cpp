/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 10:20:40 by sibrahim          #+#    #+#             */
/*   Updated: 2024/02/26 10:20:42 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
}

Point::Point(const Point& other) : _x(other._x), _y(other._y)
{
}

const Point& Point::operator=(const Point& other) const
{
	if (this != &other)
	{
		(Fixed)this->_x = other.getX();
		(Fixed)this->_y = other.getY();
	}
	return *this;
}


Point::~Point(void)
{
}


