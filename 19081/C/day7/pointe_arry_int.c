#include<stdio.h>

int main(int argc, const char *argv[])
{
	int a = 3,b = 4,c = 5,i;
/*	int *p = &a;
	int *q = &b;
	int *f = &c;
	*/
	int *p[] = {&a,&b,&c};
	//p[0] = &a;
	//p[1] = &b;
	//p[2] = &c;
	for(i = 0; i < 3; i++)
	{
		printf("%d\n",*p[i]);
	}

	return 0;
}
