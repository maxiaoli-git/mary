#include<stdio.h>
int fun(int n);
int main(int argc, const char *argv[])
{
	printf("%d\n",fun(5));
	return 0;
}
int fun(int n)
{
	if(n >= 1)
	return n*fun(n - 1);
	else
		return 1;
		//5*fun(4)		
		////5*4*fun(3)
}

