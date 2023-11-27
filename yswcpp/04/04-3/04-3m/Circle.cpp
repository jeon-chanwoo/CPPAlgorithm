#include "Circle.h"
#include <iostream>

using namespace std;

Point::Point(int x, int y) : xpos(x), ypos(y) {}
Circle::Circle(int x, int y, int r) : center(x, y) { rad = r; }
Ring::Ring(int inX, int inY, int inR, int outX, int outY, int outR) : inCircle(inX, inY, inR), outCircle(outX, outY, outR) {}

void Point::ShowPointInfo() const
{
	cout << "[" << xpos << ", " << ypos << "]" << endl;
}

void Circle::ShowCircleInfo() const
{
	cout << "radius : " << rad << endl;
	center.ShowPointInfo();
}


void Ring::ShowRingInfo() const
{
	cout << "Inner Circle Info...." << endl;
	inCircle.ShowCircleInfo();
	cout << "Outter CircleInfo..." << endl;
	outCircle.ShowCircleInfo();
}