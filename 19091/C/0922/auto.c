#include<stdio.h>
int b;//全局变量,初始化：定义变量的时候同时给变量赋值，叫初始化
//全局变量，不给初始化初值为0
int main(int argc, const char *argv[])
{
	int a;//局部变量,不初始化初值随机
	//a = 10;
	//auto int a;
	printf("%d,%d\n",a,b);
	return 0;
}
