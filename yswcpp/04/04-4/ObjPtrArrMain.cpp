#include "ObjPtrArr.h"
#include <iostream>
#include <cstring>
#pragma warning(disable:4996)
using namespace std;


int main(void)
{
	Person* parr[3];
	char namestr[100];
	char* strptr;
	int age;

	for (int i = 0; i < 3; i++)
	{
		cout << "�̸� : ";
		cin >> namestr;
		cout << "���� : ";
		cin >> age;
		parr[i] = new Person(namestr, age);
	}

	parr[0]->ShowPersonInfo();
	parr[1]->ShowPersonInfo();
	parr[2]->ShowPersonInfo();
	delete parr[0];
	delete parr[1];
	delete parr[2];
	return 0;
}