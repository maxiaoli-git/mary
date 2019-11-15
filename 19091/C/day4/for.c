#include<stdio.h>

int main(int argc, const char *argv[])
{
	int i,sum = 0;
	for(i = 1; i <= 10; i++)
	{
		sum += i;//sum = sum + i
	}
	printf("sum:%d\n",sum);
	return 0;
}
