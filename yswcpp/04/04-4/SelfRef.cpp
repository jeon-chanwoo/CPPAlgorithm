#include "SelfRef.h"
#include <iostream>
using namespace std;

SelfRef::SelfRef(int n) : num(n)
{
	cout << "��ü����" << endl;
}

SelfRef& SelfRef::Adder(int n)
{
	num += n;
	return *this;
}
SelfRef& SelfRef::ShowTwoNumber()
{
	cout << num << endl;
	return *this;
}
