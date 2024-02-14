#include "ShallowCopyError.h"
#include <iostream>
#include <cstring>

using namespace std;

Person::Person(const char* myname, int myage) {
	int len = strlen(myname) + 1;
	name = new char[len];
	strcpy(name, myname);
	age = myage;
}
Person::Person(const Person& copy) : age(copy.age) {
	name = new char[strlen(copy.name) + 1];
	strcpy(name, copy.name);
}
void Person::ShowPersonInfo() const {
	cout << "이름 : " << name << endl;
	cout << "나이 : " << age << endl;
}

Person::~Person() {
	delete[]name;
	cout << "called destructor!" << endl;
}