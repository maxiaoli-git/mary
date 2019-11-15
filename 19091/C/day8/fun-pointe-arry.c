#include<stdio.h>
int add(int a, int b);
int sub(int a,int b);
int mul(int a, int b);

int main(int argc, const char *argv[])
{
	int (*p[])(int,int) = {add,sub,mul};
	int i;
	for(i = 0; i < 3; i++)
	{
		//printf("%d\n",add(4,3));
		printf("%d\n",p[i](4,3));
	}

	return 0;
}
int add(int a, int b)
{
	return a + b;
}
int sub(int a,int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a * b;
}
