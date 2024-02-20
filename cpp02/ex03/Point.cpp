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
		//this->_x = other._x;
		//this->_y = other._y;
	}
	return *this;
}


Point::~Point(void)
{
}


