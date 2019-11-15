#include<stdio.h>

int main(int argc, const char *argv[])
{
	//sizeof:计算变量所占的空间大小
	printf("%d\n",sizeof(char));
	printf("%d\n",sizeof(short));
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(float));
	//6,7
	printf("%d\n",sizeof(double));
	//15~16
	return 0;
}
