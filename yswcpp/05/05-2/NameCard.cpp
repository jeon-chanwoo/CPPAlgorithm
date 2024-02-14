#include "NameCard.h"
#include <iostream>
#include <cstring>
#pragma warning(disable:4996)
using namespace std;

void COMP_POS::ShowPositionInfo(int pos)
{
	switch (pos)
	{
	case CLERK:
		cout << "사원" << endl;
		break;
	case SENIOR:
		cout << "주임" << endl;
		break;
	case ASSIST:
		cout << "대리" << endl;
		break;
	case MANAGER:
		cout << "과장" << endl;
	default:
		break;
	}
}

NameCard::NameCard(const char* _name,const char* _company,const char* _phone, int pos) : position(pos)
{
	name = new char[strlen(_name) + 1];
	company = new char[strlen(_company) + 1];
	phone = new char[strlen(_phone) + 1];
	strcpy(name, _name);
	strcpy(company, _company);
	strcpy(phone, _phone);
}

NameCard::NameCard(const NameCard& ref) :position(ref.position) {
	name = new char[strlen(ref.name) + 1];
	company = new char[strlen(ref.company) + 1];
	phone = new char[strlen(ref.phone) + 1];
	strcpy(name, ref.name);
	strcpy(company, ref.company);
	strcpy(phone, ref.phone);
}
void NameCard::ShowNameCardInfo()
{
	cout << "이름 : " << name << endl;
	cout << "회사 : " << company << endl;
	cout << "전화번호 : " << phone << endl;
	cout << "직급 : "; COMP_POS::ShowPositionInfo(position);
	cout << endl;
}

NameCard::~NameCard()
{
	delete[]name;
	delete[]company;
	delete[]phone;
}