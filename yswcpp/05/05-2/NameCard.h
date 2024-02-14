#ifndef __NAMECARD_H__
#define __NAMECARD_H__

namespace COMP_POS
{
	enum {CLERK, SENIOR, ASSIST, MANAGER};
	void ShowPositionInfo(int pos);
}

class NameCard {
public:
	NameCard(const char* _name,const char* _company,const char* _phone, int pos);
	NameCard(const NameCard& ref);
	void ShowNameCardInfo();
	~NameCard();
private:
	char* name;
	char* company;
	char* phone;
	int position;
};
#endif
