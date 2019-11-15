#include<stdio.h>
int add(int a, int b);
int main(int argc, const char *argv[])
{
   int (*p)(int,int) = add;
   
//指针函数的数据类型、
//参数数据类型要和指向的函数的数据类型和参数类型保持一致
   printf("%d\n",add(3,4));
   printf("%d\n",p(3,4));
	
	return 0;
}
int add(int a, int b)
{
	return a + b;
}

//st[] = {1,2,3};int *p
//int fun(int (*p)(int,int),int b);
