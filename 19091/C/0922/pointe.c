#include<stdio.h>
int main(int argc, const char *argv[])
{
	int a = 10;
	int *p = &a;
	printf("%d,%d\n",a,*p);
	return 0;
}
