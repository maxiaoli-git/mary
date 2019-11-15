#include <stdio.h>
int fun(void)
{ 
	static int count = 10;//初始化语句
	//static修饰的变量只初始化一次,，
	//下面使用的值，是上面运算后的结果
		count = 10; //赋值语句  
	return count--;
} 
int count = 1;
int main(void)
{         
	for(; count <= 10; ++count) 
		printf("%d,%d\n", count, fun());                  
	return 0;
}
