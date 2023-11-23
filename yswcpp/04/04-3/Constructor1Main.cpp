#include "Constructor1.h"

int main(void)
{
	SimpleClass sc1;
	sc1.ShowData();

	SimpleClass sc2(100);
	sc2.ShowData();
	
	SimpleClass sc3(100, 200);
	sc3.ShowData();
	return 0;
}