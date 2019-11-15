#include<stdio.h>

int main(int argc, const char *argv[])
{
	int a = 3, b = 4;
#if 0
	//int *p;
	int * const p = &a;
	*p = 5;//指针指向的内容可以通过指针名去修改
	printf("%d,%d\n",a,*p);
	p = &b;//指针的指向不可以修改,及指针不可以指向其他东西
#endif	//const.c:10:2: error: assignment of read-only variable ‘p’
   
    const int *p = &a;
	printf("%d\n",*p);
	//*p = 5;//指针指向的内容不可以通过指针名去修改
	p = &b;//指针的指向可以修改
	printf("%d\n",*p);

	return 0;
}
