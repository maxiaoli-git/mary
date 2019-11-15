#include<stdio.h>
#include<string.h>
#include <strings.h>
int main(int argc, const char *argv[])
{
	int st[] = {1,2,3,4};
	int i;
#if 0
	for(i = 0; i < 4; i++)
	{
		st[i] = 0;
	}
#endif
//	memset(st,0,sizeof(st));
	memset(st+2,0,8);
    //bzero(st,sizeof(st));
   // bzero(st,8);
	for(i = 0; i < 4; i++)
	{
		printf("%d\n",st[i]);
	}

	
	return 0;
}
