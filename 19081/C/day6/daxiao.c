#include<stdio.h>

int main(int argc, const char *argv[])
{
	int a = 0x12345678;
	int *p = &a;
	printf("%#x\n",*(char *)p);
	printf("%#x\n",*((char *)p+3));
	return 0;
}
