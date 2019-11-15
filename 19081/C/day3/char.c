#include<stdio.h>
int main(int argc, const char *argv[])
{
	char ch;
	ch = 'a';//1byte
	char ch1[] = "a";//ch1[0] = 'a',ch1[1] = '\0'
//	ch1 = "a";//'a','\0'
	printf("%d,%d\n",sizeof(ch),sizeof(ch1));
	printf("%c,%s\n",ch,ch1);
	return 0;
}
