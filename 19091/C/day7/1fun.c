#include<stdio.h>
int fun2(int a, int b);//函数声明
void fun1()
{
	printf("fun1\n");
}
int main(int argc, const char *argv[])
{
    fun1();	
	int ret = fun2(3,4);
	printf("%d\n",ret);
//	printf("%d\n",fun2(3,4));
	return 0;
}
int fun2(int a, int b)
{
	return a + b;
}
