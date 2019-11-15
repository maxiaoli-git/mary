#include<stdio.h>
char *fun();
int main(int argc, const char *argv[])
{
	char *p = fun();
	printf("%s\n",p);
	return 0;
}
char *fun()
{
	static char st[] = "hello";
	return st;
}
