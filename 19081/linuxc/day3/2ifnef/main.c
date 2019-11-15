#include<stdio.h>
#include"add.h"
#include"text.h"

struct add st;
int main(int argc, const char *argv[])
{
	printf("a+b=%d\n",add(3,4));
	printf("%d\n",text(5,st));
	return 0;
}
