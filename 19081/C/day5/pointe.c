#include<stdio.h>

int main(int argc, const char *argv[])
{
	int a = 10;
	int *p;
	p = &a;
	int **q;
	q = &p;
	printf("%p,%p,%p\n",&a,p,*q);
	printf("%d,%d,%d\n",a,*p,**q);
	return 0;
}
