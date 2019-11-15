#include<stdio.h>

int main(int argc, const char *argv[])
{
	int a = 10;
	void *p = &a;
    //void *p = a;//错误的写法
	//(int *)void *p = &a;//只能是等号右边强转赋给等号左边
	//void *p =(void *)&a;//
	//printf("%d\n",*p);
	printf("%d\n",*(int *)p);//*(int *)p
	//void.c:7:16: warning: dereferencing ‘void *’ pointer [enabled by default]
	//void.c:7:2: error: invalid use of void expression
	return 0;
}
