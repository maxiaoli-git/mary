#include<stdio.h>

int main(int argc, const char *argv[])
{
    int st[2][3] = {1,2,3,4,5,6};
	printf("%d,%d\n",st[0][0],st[1][0]);

	int i,j;
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 3; j++)
			printf("%d\n",st[i][j]);
	}
	return 0;
}
