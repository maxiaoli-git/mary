#include<stdio.h>
int sub(int c,int d);
int text(int a, int (*p)(int,int));
int main(int argc, const char *argv[])
{ 
printf("%d\n",text(3,sub));	
return 0;
}
int sub(int c,int d)
{
	return d - c;
}
int text(int a, int (*p)(int,int))
{
	//int c = 5, d = 6;
	return a + p(5,6);
}
