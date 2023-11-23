#include <iostream>
#include "Constructor1.h"

using namespace std;

SimpleClass::SimpleClass()  : num1(0), num2(0) {}

SimpleClass::SimpleClass(int n) : num1(n), num2(0) {}

SimpleClass::SimpleClass(int n1, int n2) : num1(n1), num2(n2) {}

void SimpleClass::ShowData() const
{
	cout << num1 << ' ' << num2 << endl;
}