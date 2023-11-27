#ifndef __PRIVATECONSTRUCTOR_H__
#define __PRIVATECONSTRUCTOR_H__

class AAA
{
public:
	AAA();
	AAA& CreateInitObj(int n) const;
	void ShowNum() const;
private:
	int num;
	AAA(int n);
};

#endif