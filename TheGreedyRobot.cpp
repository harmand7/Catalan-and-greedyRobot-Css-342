


// TheGreedyRobot.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Robot.h"
#include "Point.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	while (true)
	{
		int xRobo, yRobo, xDestiny, yDestiny;
		Point destiny;
		cout << "Enter start and endpoint for the Robot. Robot first then endpoint: ";

		cin >> xRobo >> yRobo >> xDestiny >> yDestiny;

		Robot FirstTest = Robot(Point(xRobo, yRobo));
		destiny = Point(xDestiny, yDestiny);

		int numberOfPaths = FirstTest.FindDestinatio(destiny);

		vector <string>* paths = FirstTest.getPathsTaken();

		for (string out : paths[0])
		{
			cout << out << endl;
		}

		cout << "Number of Paths: " << numberOfPaths << endl;

	}
}