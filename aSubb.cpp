#include <iostream>

using namespace std;

int main() {
	double a, b;
	cin >> a >> b;


	cout.precision(12);//�����ϰ� ���� ��
	cout << fixed;//�Ҽ��� �Ʒ��θ� �����ϰ� ���� ���
	//���� �ϰ� ���� ��� 
	cout << a / b << endl;
	return 0;
}