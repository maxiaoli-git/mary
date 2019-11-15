#include<stdio.h>
#include<string.h>
int main(int argc, const char *argv[])
{
	char st1[32] = "hello";
	char st2[] = "world";
	//strcat(st1,"world");
	strcat(st1,st2);
	printf("%s\n",st1);
	
	return 0;
}
