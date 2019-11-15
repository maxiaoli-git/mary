#include<stdio.h>

int main(int argc, const char *argv[])
{
	int st[] = {1,2,3,4,5,6};//全部初始化
	int st1[5] = {7,8};//部分初始化，
	int st2[5];//未初始化
	//st2[5] = {1,2,3,4};
	st2[0] = 9;
	st2[1] = 10;
	int i;
	for(i = 0; i < sizeof(st)/sizeof(int); i++)
	{
		printf("%d\n",st[i]);
	}
		return 0;
}
