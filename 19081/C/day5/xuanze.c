#include<stdio.h>
#define N 5
int main(int argc, const char *argv[])
{
	int st[N] = {0};
	int	i,j,temp,k;
	for(i = 0; i < N; i++)
	{
		scanf("%d",&st[i]);
	}
    for(i = 0; i < N - 1; i++)
	{   
		k = i;//开始的时候假设最小的元素的下标为i，对第一趟，开始假设的最小元素为第一个元素.
		for(j = i+1; j < N; j++)
		{
			if(st[k] > st[j])//从一组数据里面找最小的，方法：先假设一个最小的
				k = j;
		}
		if(k != i)
		{
			temp = st[i];
			st[i] = st[k];
			st[k] = temp;
		}

	}

	for(i = 0; i < N; i++)
	{
		printf("%d\n",st[i]);
	}
	
	return 0;
}
