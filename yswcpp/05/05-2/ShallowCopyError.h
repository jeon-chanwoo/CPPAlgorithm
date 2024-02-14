#ifndef __SHALLOWCOPYERROR_H__
#define __SHALLOWCOPYERROR_H__
#pragma warning(disable:4996)

class Person {
public:
	Person(const char* myname, int myage);
	Person(const Person& copy);
	void ShowPersonInfo() const;
	~Person();
private:
	char* name;
	int age;
};

#endif

