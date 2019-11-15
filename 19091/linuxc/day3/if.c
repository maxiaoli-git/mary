#include<stdio.h>
#define IF 9
int main(int argc, const char *argv[])
{
#if IF
	puts("if");
#else
	puts("else");
#endif
	
	return 0;
}
