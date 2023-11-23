#include "ReferenceMember.h"

int main(void)
{
	AAA obj1;
	BBB obj2(obj1, 20);
	obj2.ShowYourName();
	return 0;
}