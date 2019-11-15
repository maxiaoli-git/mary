#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void fun();
int main(int argc, const char *argv[])
{
	int a = 3;
	char *st = "world";
	fun();
	return 0;
}

void fun()
{

	//char *s = NULL;
	char *s = (char *)malloc(100);
	if(s == NULL)
	{
		printf("malloc fail\n");
	}
	strcpy(s,"hello");
	printf("%s\n",s);
	free(s);
	s = NULL;
}
