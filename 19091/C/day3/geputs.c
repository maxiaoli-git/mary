#include<stdio.h>

int main(int argc, const char *argv[])
{
     char st[10];//st 地址
	 //char *st;//st，地址
	 //char *gets(char *s);
	 gets(st);//防止越界
	 //int puts(const char *s);
	 puts(st);
	return 0;
}
