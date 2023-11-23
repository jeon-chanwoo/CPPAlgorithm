#ifndef __CONSTRUCTOR1_H__
#define __CONSTRUCTOR1_H__

class SimpleClass 
{
public:
	SimpleClass();
	SimpleClass(int n);
	SimpleClass(int n1, int n2);
	void ShowData() const;
private:
	int num1;
	int num2;
};

#endif