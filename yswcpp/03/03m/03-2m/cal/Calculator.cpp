#include <iostream>
#include "Cal.h"
using namespace std;


void Cal::Init()
{
	addCount = 0;
	minCount = 0;
	mulCount = 0;
	divCount = 0;
}

double Cal::Add(double a, double b)
{
	addCount++;
	return a + b;
}

double Cal::Min(double a, double b)
{
	minCount++;
	return a - b;
}

double Cal::Mul(double a, double b)
{
	mulCount++;
	return a * b;
}

double Cal::Div(double a, double b)
{
	divCount++;
	return a / b;
}

void Cal :: ShowOpCount()
{
	cout << "µ¡¼À : " << addCount << ' ';
	cout << "»¬¼À : " << minCount << ' ';
	cout << "°ö¼À : " << mulCount << ' ';
	cout << "³ª´°¼À : " << divCount <<endl;
}
void Cal::outp() 
{
	cout << "3.2 + 2.4 = " << Add(3.2, 2.4) << endl;
	cout << "3.5 - 1.7 = " << Min(3.5, 1.7) << endl;
	cout << "2.2 * 1.5 = " << Mul(2.2, 1.5) << endl;
	cout << "4.9 / 1.2 = " << Div(4.9, 1.2) << endl;
}