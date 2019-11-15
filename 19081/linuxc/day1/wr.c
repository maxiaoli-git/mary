
#include<stdio.h>
union un
{
	int a;
	char b;
}un1;
int main(int argc, const char *argv[])
{
	//un1.a = 10;
	un1.a = 0x12345678;
	printf("%#x\n",un1.b);
	
	return 0;
}
