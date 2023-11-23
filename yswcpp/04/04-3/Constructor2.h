#ifndef __CONSTRUCTOR2_H__
#define __CONSTRUCTOR2_H__

class SimpleClass 
{
public:
	SimpleClass(int n1, int n2);
	void ShowData() const;
private:
	int num1;
	int num2;
};
SimpleClass sc1();

#endif