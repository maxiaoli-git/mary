#include<stdio.h>

int main(int argc, const char *argv[])
{
	int a,n;
	scanf("%d%d",&a,&n);
//	printf("%d\n",a | (1 << n));
	printf("%d\n",a & ~(1 << n));
	return 0;
}
