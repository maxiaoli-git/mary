#include<stdio.h>

int main(int argc, const char *argv[])
{
	int st[2][3] = {1,2,3,4,5,6};

	//int *p[2] = {st,st+1};
	//用p可以操作二维数组的元素
	//int *q[] = {*st,*(st+1)};
	int *p[] = {st[0],st[1]};
	//第一行第一个元素的地址
    printf("%p,%p\n",p[0],*p);
    printf("%d,%d\n",*p[0],**p);

	//第一行第二个元素的地址
    printf("%p,%p\n",p[0]+1,*p+1);//*p = st[0],st[0]+1 = *p + 1
    printf("%d,%d\n",*(p[0]+1),*(*p+1));

	//第二行第一个元素的地址
	printf("%p,%p\n",p[1],*(p+1));
	printf("%d,%d\n",*p[1],**(p+1));

	//第二行第二个元素的地址
	printf("%p,%p\n",p[1]+1,*(p+1)+1);
	printf("%d,%d\n",*(p[1]+1),*(*(p+1)+1));
	return 0;
}
