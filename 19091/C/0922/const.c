#include<stdio.h>
int main(int argc, const char *argv[])
{
	int a = 3, b = 4;
	//int *p = &a;
    /*int * const p = &a;
	//指针的指向不可以修改
	 //p = &b;
	 //const.c:8:3: error: assignment of read-only variable ‘p’
     *p = 5;//a = 5;
	 printf("%d,%d\n",a,*p);*/
	const int *p = &a;
	//指针指向的内容不能通过指针名修改
	//*p = 5;
	//const.c:14:2: error: assignment of read-only location ‘*p’
	p = &b;
	//指针的指向可以修改
	printf("%d,%d\n",*p,b);

	return 0;
}
