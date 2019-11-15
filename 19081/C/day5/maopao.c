#include<stdio.h>
#define N 10
int main(int argc, const char *argv[])
{
	int st[N],i,j,temp;
	for(i = 0; i < N; i++)
	{
		scanf("%d",&st[i]);
	}
   
	for(i = 0; i < N - 1; i++)
	{
		for(j = 0; j < N - 1 - i; j++)
		{
			if(st[j] > st[j + 1]) 
			{
				temp = st[j];
				st[j] = st[j + 1];
				st[j + 1] = temp;
			}
		}
	}
	for(i = 0; i < N; i++)
	{
		printf("%d\n",st[i]);
	}
	

	return 0;
}
