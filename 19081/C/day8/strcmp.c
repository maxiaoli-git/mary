#include<stdio.h>
#include<string.h>
int main(int argc, const char *argv[])
{
	char st[] = "hellow";
	char *p = "hello";
	int ret = strcmp(st,p);
	int ret1 = strncmp(st,p,5);
	printf("%d,%d\n",ret,ret1);
	
	return 0;
}
