#include<stdio.h>
void fun(int len,int *p);
int main(int argc, const char *argv[])
{
	int st[] = {1,2,3,4,5},i;
	fun(sizeof(st)/sizeof(int),st);
	for(i = 0; i < 5; i++)
	{
	  printf("%d\n",st[i]);
	}
	return 0;
}
void fun(int len,int *p)
{
	int i;
	p[3] = 6;
	for(i = 0; i < len; i++)
	{
		printf("%d\n",p[i]);
	}

}
