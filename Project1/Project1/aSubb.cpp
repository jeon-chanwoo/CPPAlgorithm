#include <iostream>

using namespace std;

int main() {
	double a, b;
	cin >> a >> b;


	cout.precision(12);//고정하고 싶은 수
	cout << fixed;//소수점 아래로만 고정하고 싶을 경우
	//해제 하고 싶은 경우 
	cout << a / b << endl;
	return 0;
}