#ifndef _BOXWITHBALL_
#define _BOXWITHBALL_

/*
	Шар ограничен прямоугольным барьером. 
	Левый нижний угол барьера находится в начале координат, координаты выражаются в метрах, 
	стены барьера параллельны осям координат. Шар движется с постоянной скоростью.

	Программа на С++, которая выдает позицию шара после определённого промежутка времени в секундах.

	Developed by Anastasia Vladimirska
		on 2018.06.09
*/
class BoxWithBall
{
public:


	// Create a box with constant width and height and with a ball inside of it
	BoxWithBall(const int &width, const int &height, const int &startingPosX, const int &startingPosY, const int &xVelocity, const int &yVelocity)
		: _width(width), _height(height), _positionX(startingPosX), _positionY(startingPosY), 
		_xVelocity(xVelocity), _yVelocity(yVelocity), _currentTime(0)
	{}

	~BoxWithBall() {}

	//Gets time in seconds from begining of the system and retrurns ball's position at this time
	void showPosition(const int& time);

private:

	//Size of the box
	int _width;
	int _height;

	//Ball's parameters
	double _positionX;
	double _positionY;
	int _xVelocity;
	int _yVelocity;

	//time of the system
	int _currentTime;

};


#endif // !_BOXWITHBALL_