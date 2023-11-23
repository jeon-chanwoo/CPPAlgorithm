#include <iostream>
#include"ReferenceMember.h"

using namespace std;

AAA::AAA()
{
	cout << "empty object" << endl;
}
void AAA::ShowYourName()
{
	cout << "I'm class AAA" << endl;
}

BBB::BBB(AAA& r, const int& n) : ref(r), num(n) {}
void BBB::ShowYourName()
{
	ref.ShowYourName();
	cout << "and" << endl;
	cout << "I ref num " << num << endl;
}