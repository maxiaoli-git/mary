#include<stdio.h>

int main(int argc, const char *argv[])
{
	int max,a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a > b)
	{
		if(a > c)
			max = a;
		else
			max = c;
	}
	else
	{
		if(c < b)
			max = b;
		else
			max = c;
	}
	printf("%d\n",max);
	return 0;
}
