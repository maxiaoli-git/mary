#include<stdio.h>
int main(int argc, const char *argv[])
{
	int a = 3,b = 4;
    //int c = a > b && b++;
	//int c = a < b && b++;
	//&&，逻辑与全真为真，一假为假
	//有一假，后面的表达式将不被执行
	//c 0:1,c = 1;

	//int c = a > b || b++;
    //有一真，后面的表达式将不被执行
	int c = a < b || b++;
	//截断原则

	printf("b:%d,c:%d\n",b,c);//c = 1,b = 4
	return 0;
}
