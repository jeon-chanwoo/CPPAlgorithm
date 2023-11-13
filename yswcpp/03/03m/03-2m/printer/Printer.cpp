#include <iostream>
#include "Printer.h"
#pragma warning(disable:4996)
using namespace std;


void Printer::SetString(char* s)
{
	strcpy(str, s);
}

void Printer::ShowString()
{
	cout << str << endl;
}