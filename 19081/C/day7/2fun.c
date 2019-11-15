#include<stdio.h>
void swap(int a, int b);

int main(int argc, const char *argv[])
{
	int a,b;
	scanf("%d,%d",&a,&b);
	swap(a,b);//值传递（复制传递）
	printf("%d,%d\n",a,b);//3,4
	return 0;
}
void swap(int a, int b)
{
	/*int a;
	int b;*/
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("%d,%d\n",a,b);//4,3
	//return 1;
}
