#ifndef __REFERENCEMEMBER_H__
#define __REFERENCEMEMBER_H__

class AAA
{
public:
	AAA();
	void ShowYourName();
};
class BBB
{
public:
	BBB(AAA& r, const int& n);
	void ShowYourName();
private:
	AAA& ref;
	const int& num;
};
#endif
