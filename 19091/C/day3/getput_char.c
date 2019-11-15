#include<stdio.h>
int main(int argc, const char *argv[])
{
	char ch;
	int ret;
	//int getchar(void);
	//int putchar(int c);
	//scanf("%c",&ch);
	//字符就是数字（字符与字符的ascii之间自动相互转转）
	ret = getchar();
	printf("%c\n",ret);
	printf("%d\n",ret);
	putchar(ret);
//	putchar(10);
	putchar('\n');
	return 0;
}
