#include "Point.hpp"

float crossProduct(Point A, Point B, Point C) 
{
    return (B.getX().toFloat() - A.getX().toFloat() ) * (C.getY().toFloat()  - A.getY().toFloat() ) - (B.getY().toFloat()  - A.getY().toFloat() ) * (C.getX().toFloat()  - A.getX().toFloat());
}

bool bsp(Point const a, Point const b, Point const c, Point const point) 
{
	float crossABP = crossProduct(a, b, point);
	float crossBCP = crossProduct(b, c, point);
	float crossCAP = crossProduct(c, a, point);
	
	std::cout << "TRIANGLE VERTICES" << std::endl;
	std::cout << "-----------------" << std::endl;
	std::cout << "\nPOINT A:  X = " << a.getX().toFloat() << "   Y = " << a.getY().toFloat() << std::endl;
	std::cout << "POINT B:  X = " << b.getX().toFloat() << "   Y = " << b.getY().toFloat() << std::endl;
	std::cout << "POINT C:  X = " << c.getX().toFloat() << "   Y = " << c.getY().toFloat() << std::endl;
	
	std::cout <<"\nPOINT TO CHECK:  X = " << point.getX().toFloat() << "   Y = " << point.getY().toFloat() << std::endl;
	std::cout << std::endl;
	
	if (crossABP == 0 && crossBCP == 0 && crossCAP == 0) 
		return 0;
	else if ((crossABP > 0 && crossBCP > 0 && crossCAP > 0) || (crossABP < 0 && crossBCP < 0 && crossCAP < 0)) 
		return 1;
	else 
		return 0; 		
}

