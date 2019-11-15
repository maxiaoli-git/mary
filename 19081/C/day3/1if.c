#include<stdio.h>

int main(int argc, const char *argv[])
{
	int a = 3;
	if(a == 3)
	{
		puts("3");
	}
   //a = 4;// if与else分开
    //error: ‘else’ without a previous ‘if’
    //if 下面可以没有else，else上面必须要由if
	else
	{
		puts("4");	
	}
	return 0;
}
