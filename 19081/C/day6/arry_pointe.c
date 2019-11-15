#include<stdio.h>
int main(int argc, const char *argv[])
{
	int st[2][3] = {1,2,3,4,5,6};
	//int *p = st;
	int (*p)[3] = st;
	printf("%p,%p\n",st,st+1);
    printf("%p,%p\n",p,p+1);
	//简单指针不可以去操作二维数组
	
    //第一行第一个元素的地址
    printf("%p,%p,%p\n",*p,p[0],&p[0][0]);

    //第一行第一个元素
    printf("%d,%d,%d\n",**p,*p[0],p[0][0]);

    //第二行第一个元素的地址
    printf("%p,%p,%p\n",*(p+1),p[1],&p[1][0]);

    //第二行第一个元素
    printf("%d,%d,%d\n",*(*(p+1)),*p[1],p[1][0]);

   // p[1][0]
   // *(*(p+1)+0) *(*(p+1))
   printf("%d\n",*(*p+1));
   printf("%d\n",*(*(p+1)+1));
	return 0;
}
