#include<stdio.h>

int main(int argc, const char *argv[])
{
	 int st[5];
	 //st:?//st是一维数组的首地址
	//st实质：变量
	st[0] = 0;
	st[1] = 1;
	st[2] = 2;
	printf("%d,%d,%d,%d\n",st[0],st[1],st[2],st[4]);
	printf("%p\n",st);
	return 0;
}
