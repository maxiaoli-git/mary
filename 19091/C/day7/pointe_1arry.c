#include<stdio.h>

int main(int argc, const char *argv[])
{
	int st[3] = {1,2,3},i;
	int *p[] = {st,st+1,st+2};
	//p[0] = st;
	//p[1] = st+1
	for(i = 0; i < 3; i++)
	{
		printf("%d\n",*p[i]);
	}
	return 0;
}
