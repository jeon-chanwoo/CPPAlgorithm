#ifndef __DESTRUCTOR_H__
#define __DESTRUCTOR_H__

class Person
{
public:
	Person(const char* myname, int myage);
	void ShowPersonInfo() const;
	~Person();
private:
	char* name;
	int age;
};


#endif
