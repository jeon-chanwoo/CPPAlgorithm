#include "Destructor.h"
#include <cstring>
#include <iostream>
#pragma warning(disable: 4996)

using namespace std;

Person::Person(const char* myname, int myage)
{
	int len = strlen(myname) + 1;
	name = new char[len];
	strcpy(name, myname);
	age = myage;
}

void Person::ShowPersonInfo() const
{
	cout << "이름 : " << name << endl;
	cout << "나이 : " << age << endl;
}
Person::~Person()
{
	delete []name;
	cout << "called destructor!" << endl;
}