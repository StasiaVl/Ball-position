#include <iostream>
using namespace std;
#include "BoxWithBall.h"

void BoxWithBall::showPosition(const int & time)
{

	int timeGone = time - _currentTime; //find delta time
	_currentTime = time;

	double newPosX = _positionX + _xVelocity * timeGone;
	size_t changer = 0;

	//return the ball into the box on X axis
	while (newPosX > _width || newPosX < 0) 
	{
		if (newPosX > _width)
		{
			newPosX = _width - (newPosX - _width);
		}
		else {
			newPosX *= -1;;
		}
		++changer;
	}
	if (changer % 2) _xVelocity *= -1; //change velocity if needed
	_positionX = newPosX;

	double newPosY = _positionY + _yVelocity * timeGone;
	changer = 0;

	//return the ball into the box on Y axis
	while (newPosY > _height || newPosY < 0)
	{
		if (newPosY > _height)
		{
			newPosY = _height - (newPosY - _height);
		}
		else {
			newPosY *= -1;;
		}
		++changer;
	}
	if (changer % 2) _yVelocity *= -1; //change velocity if needed
	_positionY = newPosY;
	
	cout << round(_positionX) << ',' << round(_positionY) << endl;

	return;
}
