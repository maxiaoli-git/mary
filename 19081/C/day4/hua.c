#include<stdio.h>
int main(int argc, const char *argv[])
{
	int i,j,k,n;
	for(n = 100;n < 999;n++)
	{
		i = n/100;//将n对100取余
		//j = n/10%10;//将n先整除以10再对10求模
		j = (n-i*100)/10;//将（n-i*100)整除以10
		k = n%10;//将n对10取余
		if(i*100+j*10+k ==i*i*i+j*j*j+k*k*k)
		{
			printf("水仙花数有：%d\n",n);
		}
	}
	return 0;
}
