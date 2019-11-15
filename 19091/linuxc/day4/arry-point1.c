#include<stdio.h>
#include<string.h>
int main(int argc, const char *argv[])
{
	char st[]="Computer Science";
	char *p=st;
	int i;
	for(i=0;i<strlen(p);i+=2)
	{
		printf("%c",p[i]);
	}
	printf("\n");
	return 0;
}
