#include <iostream>
#include <string>
#include <fstream> 
using namespace std;

#include "BoxWithBall.h"

/*
	Developed by Anastasia Vladimirska
	on 2018.06.09
*/

int main(int argc, char* argv[])
{
	if (argc > 1)
	{
		int width, height;
		int x, y;
		int velX, velY;
		string s;

		for (int i = 1; i < argc; ++i) //just in case of several input files
		{
			ifstream file(argv[i]);
			
			getline(file, s); //	first line of the file, size of the box
			width = stoi(s);
			height = stoi(s.substr(s.find(',') + 1));

			getline(file, s); //	second line of the file, position of the ball
			x = stoi(s);
			y = stoi(s.substr(s.find(',') + 1));

			getline(file, s); //	third line of the file, velocity by axes
			velX = stoi(s);
			velY = stoi(s.substr(s.find(',') + 1));

			BoxWithBall box(width, height, x, y, velX, velY);

			while (getline(file, s)) // and test cases to the end of file
			{
				box.showPosition(stoi(s));
			}

			file.close();
			cout << endl;
		}
	}
	else
	{
		cout << "No arguments" << endl;
	}

	return 0;
}