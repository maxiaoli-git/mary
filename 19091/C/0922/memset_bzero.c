#include<stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int st[5] = {1,2,3,4,5};
	int i;
//	memset(st,0,sizeof(st));
    bzero(st,sizeof(st));

	for(i = 0; i < 5; i++)
	{
	  printf("%d\n",st[i]);
	}
	return 0;
}
