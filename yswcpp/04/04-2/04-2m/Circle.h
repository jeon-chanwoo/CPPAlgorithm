#ifndef __CIRCLE_H__
#define __CIRCLE_H__

class Point
{
public:
	void Init(int x, int y);
	void ShowPointInfo() const;
private:
	int xpos, ypos;
};

class Circle
{
public:
	void Init(int x, int y, int r);
	void ShowCircleInfo() const;
private:
	int rad;
	Point center;
};

class Ring
{
public:
	void Init(int inX, int inY, int inR, int outX, int outY, int outR);
	void ShowRingInfo() const;
private:
	Circle inCircle;
	Circle outCircle;
};

#endif