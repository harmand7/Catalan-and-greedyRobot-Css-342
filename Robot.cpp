


#include "stdafx.h"
#include "Robot.h"


Robot::Robot(Point newPoint)
{
	startpoint = newPoint;
	pathTaken = new vector <string>;
}
vector<string>* Robot::getPathsTaken() const
{
	return pathTaken;
}
//returns the number of paths taken. Also calls the recursive method to go through the loop and save the paths take into vector string
int Robot::FindDestinatio(Point ePoint)
{
	endPoint = ePoint;
	if (ePoint == startpoint)
	{
		return 0;
	}
	else
	{
		return recursivePath(startpoint, "");
	}
}
int Robot::recursivePath(Point marker, string somePath)
{
	int numOPaths = 0;
	if (marker.Distance(endPoint) == 0)
	{
		pathTaken[0].push_back(somePath);
		return 1;
	}
	//only adds one to the number of paths if it reaches the end. 
	//only adds the path to the vector string when it reaches the end
	//The method does not pass the current marker rather passes the marker with the change in distance
	if ((Point(marker.getXCoord() +1, marker.getYCoord())).Distance(endPoint) < marker.Distance(endPoint)) //movment in the east direction
	{
		numOPaths += recursivePath(Point(marker.getXCoord() + 1, marker.getYCoord()), somePath + "E");
	}

	if ((Point(marker.getXCoord() -1, marker.getYCoord())).Distance(endPoint) < marker.Distance(endPoint)) //movment in the west direction
	{
		numOPaths += recursivePath(Point(marker.getXCoord() -1, marker.getYCoord()), somePath + "W");
	}

	if ((Point(marker.getXCoord(), marker.getYCoord()+1)).Distance(endPoint) < marker.Distance(endPoint)) //movment in the north direction
	{
		numOPaths += recursivePath(Point(marker.getXCoord(), marker.getYCoord()+1), somePath + "N");
	}

	if ((Point(marker.getXCoord(), marker.getYCoord()-1)).Distance(endPoint) < marker.Distance(endPoint)) //movment in the south direction
	{
		numOPaths += recursivePath(Point(marker.getXCoord(), marker.getYCoord()-1), somePath + "S");
	}
	return numOPaths;
}
Robot::~Robot()
{//check that this does not do memory leaks.... 
	delete pathTaken;
	pathTaken = nullptr;
}
