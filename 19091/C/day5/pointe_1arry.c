#include<stdio.h>
int main(int argc, const char *argv[])
{
#if 0
	int a = 10;
	int *p = &a;
	char *p = &a;//不可以
	什么类型的数，必须要用什么类型的指针去指向；
#endif
	int st[5] = {1,2,3,4,5};
	//st是址常量，不可以作为左值
	printf("%p,%p\n",st,&st[0]);
	int *p = st;
	//st++;//st = st + 1;
	//st是址常量，不可以作为左值
	//pointe_1arry.c:14:4: error: lvalue required as increment operand
	p++;//p = p + 1;
	//p++ 指针向地址大的方向移动1个数
	printf("%d\n",*p);
	int *q = &st[4];//p+3;st+4
	printf("%d\n",q-p);
	//p-q 两指针之间相隔数据元素的个数
	return 0;
}
