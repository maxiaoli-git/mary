#include<stdio.h>
#include<string.h>
int main(int argc, const char *argv[])
{
	char st[32];
	/*st[0] = 'a';
	st[1] = 'b';
	st = "abcd";*/
	strcpy(st,"hello world");
	printf("%s\n",st);

	return 0;
}
