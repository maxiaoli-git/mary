#include<stdio.h>

void main()
{
	int a;//不给赋值的话，值为随机
	a = 5;
	printf("%d\n",a++);//先取值，再自加1

	printf("%d\n",++a);//先自加1，再取值
	//a++;
	++a;
	//a++或++a单独成一条语句没有区别

	printf("%d\n",a);
}
