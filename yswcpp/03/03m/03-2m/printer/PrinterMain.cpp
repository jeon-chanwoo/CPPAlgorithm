#include "Printer.h"

int main(void)
{
	Printer pnt;
	pnt.SetString("Hello world!");
	pnt.ShowString();

	pnt.SetString("I Love C++!");
	pnt.ShowString();
	return 0;
}
