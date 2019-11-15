#include<stdio.h>

int main(int argc, const char *argv[])
{
	char ch;
	//scanf("%c",&ch);
	ch = getchar();
	if(ch >= 'A' && ch <= 'Z')
	{
		ch += ' ';
	}
	else if(ch >= 'a' && ch <= 'z')
		ch -= 32;
	else
	{
		printf("input error\n");
		return -1;
	}
	//printf("%c\n",ch);
	putchar(ch);
	putchar(10);
	return 0;
}
