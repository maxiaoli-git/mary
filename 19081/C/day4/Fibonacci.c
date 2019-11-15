#include <stdio.h>
int main(int argc, const char *argv[])
{
	int F[10]={1,1};
	int i=2;
	for (i=2;i<10;i++)
	F[i] = F[i-1]+F[i-2];
	for(i=9;i>=0;i--)
	printf("%d ",F[i]);
	putchar(10);
	return 0;
}
