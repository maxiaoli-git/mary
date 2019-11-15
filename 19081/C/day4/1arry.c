#include<stdio.h>
int main(int argc, const char *argv[])
{
	int st[] = {1,2,3,4,5};//全部初始化
	int st1[5] = {6,7,8};//部分初始化,特点：未初始化的值为0

	int st2[5];//未初始化；特点：当存储类型为auto时值随机
	int i;
	for(i = 0; i < sizeof(st)/sizeof(int); i++)//sizeof(st)/sizeof(st[0])
	{
		printf("%d ",st[i]);
	}
	putchar('\n');
	for(i = 0; i < sizeof(st1)/sizeof(int); i++)//sizeof(st1)/sizeof(st[0])
	{
		printf("%d ",st1[i]);
	}
	putchar('\n');
	for(i = 0; i < sizeof(st2)/sizeof(int); i++)//sizeof(st2)/sizeof(st[0])
	{
		printf("%d ",st2[i]);
	}
	putchar('\n');
	for(i = 0; i < sizeof(st2)/sizeof(int); i++)//sizeof(st2)/sizeof(st[0])
	{
		//printf("%d ",st[i]);
		scanf("%d",&st2[i]);
	}
	for(i = 0; i < sizeof(st2)/sizeof(int); i++)//sizeof(st2)/sizeof(st[0])
	{
		printf("%d ",st2[i]);
	}
	putchar('\n');

	return 0;
}
