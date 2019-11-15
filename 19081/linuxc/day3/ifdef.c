#include<stdio.h>
//#define IFDEF
int main(int argc, const char *argv[])
{
#ifdef IFDEF
	printf("if\n");
#else
	printf("else\n");
#endif
	
	return 0;
}
