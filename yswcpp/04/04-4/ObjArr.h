#ifndef __OBJARR_H__
#define __OBJARR_H__

class Person
{
public:
	Person(char* myname, int myage);
	Person();
	void SetPersonInfo(char* myname, int myage);
	void ShowPersonInfo() const;
	~Person();
private:
	int age;
	char* name;
};

#endif