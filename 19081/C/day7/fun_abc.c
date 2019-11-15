#include<stdio.h>
void fun1(char a,char *st);
int main(int argc, const char *argv[])
{
	char st[100]={0};
	char a;
	printf("请输入一个字符串：");
	scanf("%s",st);
	printf("请输入要计算的字母：");
	getchar();
	scanf("%c",&a);
	fun1(a,st);
	return 0;
}

void fun1(char a,char *st)
{
	int i,count=0;
	for(i = 0; st[i] != '\0';i++)
	{
		if(st[i]==a)
			count++;
	}
	printf("%c的个数为：%d\n",a,count);
}
