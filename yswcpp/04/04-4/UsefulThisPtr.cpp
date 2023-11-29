#include "UsefulThisPtr.h"
#include <iostream>

using namespace std;

TwoNumber::TwoNumber(int num1, int num2)
{
	this->num1 = num1;
	this->num2 = num2;
}

void TwoNumber::ShowTwoNumber()
{
	cout << this->num1 << endl;
	cout << this->num2 << endl;
}
