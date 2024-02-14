#include "ShallowCopyError.h"
#include <cstring>


int main(void) {
	Person man1("Lee dong woo", 29);
	Person man2 = man1;
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}