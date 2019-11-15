#include<stdio.h>

int main(int argc, const char *argv[])
{
	int st[][3] = {1,2,3};
	int (*p)[3] = st;
	int *q[] = {*st,*(st+1)};
	printf("%d\n",sizeof(st));//12
	
	printf("%d\n",sizeof(p));//4
	printf("%d\n",sizeof(q));//8
	return 0;
}
