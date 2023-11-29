#ifndef __POINTERTHIS_H__
#define __POINTERTHIS_H__

class SoSimple
{
public:
	SoSimple(int n);
	void ShowSimpleData() const;
	SoSimple* GetThisPointer();
private:
	int num;
};

#endif
