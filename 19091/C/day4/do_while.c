#include<stdio.h>

int main(int argc, const char *argv[])
{
	int num = 0,sum = 0;
	do{
		sum += num;
		num++;
	}while(num<=10);
	printf("%d\n",sum);

	return 0;
}
