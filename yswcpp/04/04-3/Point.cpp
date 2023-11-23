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
		cout << "��� ������ �� ����" << endl;
		return false;
	}
	x = xpos;
	return true;
}

bool Point::SetY(int ypos)
{
	if (0 > ypos || 100 < ypos)
	{
		cout << "��� ������ �� ����" << endl;
		return false;
	}
	y = ypos;
	return true;
}
