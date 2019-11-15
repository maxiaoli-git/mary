#include<stdio.h>

int main(int argc, const char *argv[])
{
	int st[][3] = {1,2,3,4,5,6};
	printf("%p,%p,%p\n",*st,st[0],&st[0][0]);
	printf("%d,%d,%d\n",**st,*st[0],st[0][0]);
	printf("%p,%p,%p\n",*(st+1),st[1],&st[1][0]);//*(&st[1][0])
	printf("%d,%d,%d\n",*(*(st+1)),*st[1],st[1][0]);
	return 0;
}
