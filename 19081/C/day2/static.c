#include<stdio.h>

int main(int argc, const char *argv[])
{
	static int a;
	//static修饰的变量不给赋初值，值为0
	//static修饰的变量存储在静态区
	//static修饰的变量，生命周期为整个文件
	printf("%d\n",a);
	return 0;
}
