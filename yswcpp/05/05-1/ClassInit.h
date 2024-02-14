#ifndef __CLASSINIT_H__
#define __CLASSINIT_H__

class SoSimple {
public:
	SoSimple(int n1, int n2);
	SoSimple(SoSimple &copy);
	void ShowSimpleData();
private:
	int num1;
	int num2;
};

#endif
