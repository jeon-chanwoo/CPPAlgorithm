#include "ClassInit.h"
#include <iostream>
using namespace std;

int main(void) {
	SoSimple sim1(15, 30);
	cout << "생성 및 초기화 직전" << endl;
	SoSimple sim2 = sim1;
	cout << "생성 및 초기화 직후 " << endl;
	sim2.ShowSimpleData();
	return 0;
}