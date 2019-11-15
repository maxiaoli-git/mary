#include<stdio.h>
int main(int argc, const char *argv[])
{
	int a,b,c,temp;
	scanf("%d%d%d",&a,&b,&c);
	if(a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	if(a > c)
	{
		temp = a;
		a = c;
		c = temp;
	}
	if(b > c)
	{
		temp = b;
		b = c;
		c = temp;
	}
	printf("%d,%d,%d\n",a,b,c);
	return 0;
}
