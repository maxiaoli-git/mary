#include<stdio.h>
int main(int argc, const char *argv[])
{
	int num = 0,sum = 0;
	while(num <= 10)
	{
		sum += num;
		num++;
	}
	printf("%d\n",sum);
	return 0;
}
