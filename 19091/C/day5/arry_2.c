#include<stdio.h>

int main(int argc, const char *argv[])
{
	int st[][3] = {1,2,3,4,5,6,7,8};//部分初始化,未初始化的部分值为0
	//行号可以省略，列号不可省略
	//printf("%d\n",st[2][2]);
	int i,j;
	for(i = 0; i < sizeof(st)/12; i++)//st[0],
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d\n",st[i][j]);
		}
	}
	printf("%p,%p\n",st,st+1);

	return 0;
}
