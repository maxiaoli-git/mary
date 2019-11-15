#include<stdio.h>
void fun(int len,int st[len]);
//void fun(int st[len],int len);
int main(int argc, const char *argv[])
{
	int st[] = {1,2,3,4,5};
    fun(sizeof(st)/sizeof(int),st);
     //fun(st,sizeof(st)/sizeof(int));
	return 0;
}
void fun(int len,int st[len])
//void fun(int st[len],int len)
{
	int i;
//	st++;
    printf("%d\n",sizeof(st));
	st[3] = 6;
	for(i = 0; i < len; i++)
	{
		printf("%d\n",st[i]);
	}

}
