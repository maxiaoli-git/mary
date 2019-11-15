#include<stdio.h>

int main(int argc, const char *argv[])
{
	printf("argc:%d\n",argc);
	/*
	int st[] = "hello";
	printf("%s\n",st);*/
	printf("%s\n",argv[0]);
	printf("%s\n",argv[1]); //*argv[1]
	printf("%c\n",*(argv[1]+1));//*(argv[1]+1)
	return 0;
}
