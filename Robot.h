


#pragma once
#include "Point.h"
#include <vector>
#include <string>

class Robot
{
public:
	Robot(Point startPoint);
	vector<string>* getPathsTaken() const;
	int FindDestinatio(Point ePoint);
	~Robot();

private:
	Point startpoint;
	Point endPoint;
	int recursivePath(Point epoint, string somePath);
	vector <string>* pathTaken;
};