#include<stdio.h>

int main(int argc, const char *argv[])
{
	int i,j;
	for(i = 0; i < 7; i++)
	{
		for(j = 0; j <= i; j++)
			printf("*");
		for(j = 0; j < i; j++)
			printf("%c",'F'- j);
		putchar(10);		
	}
	return 0;
}
