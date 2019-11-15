#include<stdio.h>

int  main(int argc, const char *argv[])
{
	//int printf(const char *format, ...);
    /*
	 int :函数返回值类型（整型）
     printf:函数名
	 （const char *format）：函数的参数，格式控制字符串
	 * */
	int a = 12;//1100
	char ch = 'b';
	float f = 12.345;
	double d = 12.345;
	char st[] = "hello";
	//int b = 1*10^3;//pow()
	printf("%#o\n",a);
	printf("%#x\n",a);
	printf("%d\n",a);
	printf("%c\n",ch);
	printf("%f\n",f);
	printf("%lf\n",d);
	printf("%s\n",st);
	printf("%e\n",f);

	

 return 0;
}
