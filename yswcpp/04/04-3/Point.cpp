#include <iostream>
#include "Point.h"

using namespace std;

Point::Point(const int& xpos, const int& ypos) : x(xpos), y(ypos) {}
int Point::Getx() const { return x; }
int Point::Gety()const { return y; }
bool Point::SetX(int xpos)
{
	if (0 > xpos || 100 < xpos)
	{
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}
	x = xpos;
	return true;
}

bool Point::SetY(int ypos)
{
	if (0 > ypos || 100 < ypos)
	{
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}
	y = ypos;
	return true;
}
