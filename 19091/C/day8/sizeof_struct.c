#include<stdio.h>
int main(int argc, const char *argv[])
{	struct
	{
       int a;
	   short b;
	   char c;
	}st;//8
	struct
	{
		int a;
		short b;
		double c;
	}st1;//16
	struct 
	{
		short a;
		char b;
		char c;
	}st2;//4
	struct 
	{
		char a;
		short b;
		char c;
	}st3;//6
    struct
	{
		double a;
		short b;
	}st4;
	printf("%d,%d,%d,%d,%d\n", \
			sizeof(st),sizeof(st1),sizeof(st2),sizeof(st3),sizeof(st4));
//	8,16,4,6

	return 0;
}
