#ifndef __CAL_H__
#define __CAL_H__

class Cal
{
private:
	int addCount;
	int minCount;
	int mulCount;
	int divCount;
public:
	void Init();
	double Add(double a, double b);
	double Min(double a, double b);
	double Mul(double a, double b);
	double Div(double a, double b);
	void ShowOpCount();
	void outp();
};

#endif