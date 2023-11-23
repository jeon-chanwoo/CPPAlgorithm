#include <iostream>
#include "Constructor2.h"

using namespace std;

SimpleClass::SimpleClass(int n1, int n2) : num1(n1), num2(n2) {}

void SimpleClass::ShowData()const
{
	cout << num1 << ' ' << num2 << endl;
}

SimpleClass sc1() 
{
	SimpleClass sc(20, 30);
	return sc;
}