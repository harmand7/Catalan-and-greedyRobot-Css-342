


#pragma once
#include <string>
#include <iostream>
using namespace std;

struct Point
{
	Point();
	Point(int x, int y);

	int getXCoord() const;
	int getYCoord() const;
	bool operator==(const Point &rhs);
	bool operator!=(const Point &rhs);

	float Distance(Point a);

	~Point();
private:

	int xCord = 0;
	int yCord = 0;
};