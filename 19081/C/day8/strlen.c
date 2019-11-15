#include<stdio.h>
#include<string.h>
int main(int argc, const char *argv[])
{
	char st[] = "hello";
	printf("%d\n",sizeof(st));//6
	printf("%d\n",strlen(st));//5

	return 0;
}
