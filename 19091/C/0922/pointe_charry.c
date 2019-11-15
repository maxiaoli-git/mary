#include<stdio.h>
int main(int argc, const char *argv[])
{
	int st[] = {1,2,3,4,5};
	printf("%p,%p\n",st,&st[0]);
	int *p = st;
    int *q = st + 4;//q = &st[4]
/*	printf("%d\n",st[3]);
	printf("%d\n",p[3]);
	printf("%d\n",*(st+3));
	printf("%d\n",*(p+3));*/
	printf("%d\n",*q);
	printf("%d\n",q-p);

	return 0;
}
