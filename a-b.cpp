#include <iostream>

using namespace std;

int main() {
	int a, b;

	do {
		cin >> a;
	} while (a <= 0);

	do {
		cin >> b;
	} while (b >= 10);

	cout << a - b << endl;
	return 0;
}