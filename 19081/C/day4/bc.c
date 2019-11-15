#include<stdio.h>

int main(int argc, const char *argv[])
{
	int i;
	for(i = 0; i < 10; i++)
	{
		if(i == 5)
		//	break;//结束循环，只结束一层循环,跳出循环体。
		continue;//结束本次循环，继续判断下一次循环是否执行
		   //如果条件满足，接着执行，如果条件不满足，跳出循环体
		printf("%d\n",i);
	}
	return 0;
}
