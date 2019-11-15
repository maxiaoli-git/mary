#include<stdio.h>

int main(int argc, const char *argv[])
{
	char ch;
	scanf("%c",&ch);
	switch(ch)
	{
	case 'a':
	case 'A':
		puts("A");
		break;
	default:
		puts("other");
	}
	return 0;
}
