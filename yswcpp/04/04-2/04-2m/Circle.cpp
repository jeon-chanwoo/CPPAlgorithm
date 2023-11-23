#include <iostream>
#include "Circle.h"

using namespace std;

void Point::Init(int x, int y)
{
	xpos = x;
	ypos = y;
}

void Point::ShowPointInfo() const
{
	cout << "[" << xpos << ", " << ypos << "]" << endl;
}

void Circle::Init(int x, int y, int r) 
{
	rad = r;
	center.Init(x, y);
}

void Circle::ShowCircleInfo() const
{
	cout << "radius : " << rad << endl;
	center.ShowPointInfo();
}

void Ring::Init(int inX, int inY, int inR, int outX, int outY, int outR)
{
	inCircle.Init(inX, inY, inR);
	outCircle.Init(outX, outY, outR);
}

void Ring::ShowRingInfo() const
{
	cout << "Inner Circle Info..." << endl;
	inCircle.ShowCircleInfo();
	cout << "Outter Circle Info..." << endl;
	outCircle.ShowCircleInfo();
}