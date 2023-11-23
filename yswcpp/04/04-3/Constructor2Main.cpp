#include "Constructor2.h"

int main(void)
{
	SimpleClass sc1();
	SimpleClass mysc = sc1();
	mysc.ShowData();
	return 0;
}