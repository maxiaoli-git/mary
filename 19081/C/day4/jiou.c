#include<stdio.h>
int main(int argc, const char *argv[])
{
	int n,a=0,b=0;
	float sum1=0,sum2=0;
	float x,y;
	while(1)
	{
		printf("请输入数字：\n");
		int ret=scanf("%d",&n);
		if(n==0||ret==0)
	/*	if(ret==0)
			printf("输入错误!\n");
		if(n==0)*/
		break;
		if(n%2==0)
		{
		a++;
		sum1+=n;
		x=sum1/a;
		}else
		{
		b++;
		sum2+=n;
		y=sum2/b;
		}
	}
	printf("偶数个数为：%d 平均数为:%f\n",a,x);
	printf("奇数个数为：%d 平均数为:%f\n",b,y);
	return 0;
}
