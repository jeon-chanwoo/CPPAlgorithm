#include "ClassInit.h"
#include <iostream>
using namespace std;

int main(void) {
	SoSimple sim1(15, 30);
	cout << "���� �� �ʱ�ȭ ����" << endl;
	SoSimple sim2 = sim1;
	cout << "���� �� �ʱ�ȭ ���� " << endl;
	sim2.ShowSimpleData();
	return 0;
}