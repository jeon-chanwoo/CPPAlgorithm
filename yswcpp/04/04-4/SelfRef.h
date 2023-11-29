#ifndef __SELFREF_H__
#define __SELFREF_H__

class SelfRef 
{
public:
	SelfRef(int n);
	SelfRef& Adder(int n);
	SelfRef& ShowTwoNumber();
private:
	int num;
};

#endif
