#include<stdio.h>
int main(int argc, const char *argv[])
{
	char st[] = {'a','b','c'};
	//st[0] = 'a';
	char st1[32] = {'a','b','c'};
	char st2[] = "hello";
	printf("%d,%d,%d\n",sizeof(st),sizeof(st1),sizeof(st2));
	//3,32,6

	return 0;
}
