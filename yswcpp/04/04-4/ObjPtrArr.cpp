#include "ObjPtrArr.h"
#include <cstring>
#include <iostream>
#pragma warning(disable:4996)
using namespace std;

Person::Person(char* myname, int myage)
{
	int len = strlen(myname) + 1;
	name = new char[len];
	strcpy(name, myname);
	age = myage;
}

Person::Person()
{
	name = NULL;
	age = 0;
	cout << "called Person()" << endl;
}

void Person::SetPersonInfo(char* myname, int myage)
{
	name = myname;
	age = myage;
}

void Person::ShowPersonInfo() const
{
	cout << "이름 : " << name << ", " << "나이 : " << age << endl;
}

Person::~Person()
{
	delete[]name;
	cout << "called destructor!" << endl;
}