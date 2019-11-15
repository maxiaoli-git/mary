#include<stdio.h>
int main(int argc, const char *argv[])
{
	char ch;
	while(1)
	{
		scanf("%c",&ch);
		printf("%c\n",ch);
		if(ch == '\n')
			printf("10");
		getchar();
	}
	return 0;
}
