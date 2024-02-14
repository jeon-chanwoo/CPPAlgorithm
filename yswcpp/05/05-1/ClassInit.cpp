#include "ClassInit.h"
#include <iostream>
using namespace std;

SoSimple::SoSimple(int n1, int n2) : num1(n1), num2(n2) {

}

SoSimple::SoSimple(SoSimple& copy) : num1(copy.num1), num2(copy.num2) {
	cout << "Called SoSimple(SoSimple &copy)" << endl;
}

void SoSimple::ShowSimpleData() {
	cout << num1 << endl;
	cout << num2 << endl;
}