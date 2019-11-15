#include<stdio.h>
#define MAX(x,y) ((x)>(y)?(x):(y))
int main(int argc, const char *argv[])
{
	//int x,y;
	int m,n;
    //scanf("%d %d",&x,&y);
	scanf("%d %d",&m,&n);
	printf("%d\n",MAX(m,n));
	//printf("%d\n",MAX(x,y));
	return 0;
}
