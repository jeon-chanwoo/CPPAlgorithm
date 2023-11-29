#include "SelfRef.h"

int main(void)
{
	SelfRef obj(3);
	SelfRef& ref = obj.Adder(2);
	obj.ShowTwoNumber();
	ref.ShowTwoNumber();

	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();
	return 0;

}