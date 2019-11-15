#include<stdio.h>
int main(int argc, const char *argv[])
{
		int st[][3] = {1,2,3,4,5};
     	int (*p)[3] = st;
		//           = {st,st+1};
		//           //数组，初始化必须确定到某个元素
		int *q[3] = {*st,*(st+1)};
		printf("%p,%p,%p\n",p,*p,&p[0][0]);
		printf("%d,%d,%d\n",**p,**p,p[0][0]);

		printf("%p,%p,%p,%p\n",p+1,p[1],*(p+1),&p[1][0]);
		printf("%d,%d,%d,%d\n",**(p+1),*p[1],**(p+1),p[1][0]);

		printf("%p,%p,%p\n",q[0],*q,&q[0][0]);
		printf("%d,%d,%d\n",*q[0],**q,q[0][0]);
	
	return 0;
}
