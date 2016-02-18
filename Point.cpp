


#include "stdafx.h"
#include "Point.h"
#include <cmath>

Point::Point()
{
	xCord = 0;
	yCord = 0;
}

Point::Point(int x, int y)
{
	xCord = x;
	yCord = y;
}

int Point::getXCoord() const
{
	return xCord;
}
int Point::getYCoord() const
{
	return yCord;
}

//use this to check if the robot is at the same point
bool Point::operator==(const Point &rhs)
{
	if (rhs.xCord == xCord && rhs.yCord == yCord)
	{
		return true;
	}
	return false;
}
bool Point::operator!=(const Point &rhs)
{
	return(!(*this == rhs));
}
//pathgorem therom used to find how far the points are.
float Point::Distance(Point a)
{	
	float temp;
	int xDistance = xCord - a.xCord;
	int yDistance = yCord - a.yCord;
	temp = sqrt(xDistance*xDistance + yDistance * yDistance);
	return temp;
}

Point::~Point()
{
}
