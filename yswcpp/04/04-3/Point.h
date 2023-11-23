#ifndef __POINT_H__
#define __POINT_H__

class Point
{
public:
	Point(const int& xpos, const int& ypos);
	int Getx() const;
	int Gety() const;
	bool SetX(int xpos);
	bool SetY(int ypos);
private:
	int x;
	int y;
};

#endif