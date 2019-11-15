#include<stdio.h>
int main(int argc, const char *argv[])
{
	char ch1,ch2;
	int ret = scanf("%c %c",&ch1,&ch2);
	printf("%c,%c,%d\n",ch1,ch2,ret);
	return 0;
}
