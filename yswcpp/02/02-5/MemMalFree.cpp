#include <iostream>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

using namespace std;

char * MakeStrAdr(int len);

int main(void)
{
	char * str = MakeStrAdr(20);
	strcpy(str, "I am so happy");
	cout << str << endl;
	free(str);
	return 0;
}

char* MakeStrAdr(int len)
{
	char* str = (char*)malloc(sizeof(char) * len);
	return str;
}