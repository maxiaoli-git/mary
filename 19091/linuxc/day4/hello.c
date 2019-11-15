#include<stdio.h> 
#define N 30

int main(int argc, const char *argv[])
{
	char st[N]={0};
	char *p=st,*q=st;
	int t;
	gets(st);
	while(*p!='\0')//hello 
		p++;
	    p-=1;
	while(q<p){
	t=*q;
	*q=*p;
	*p=t;
	q++;
	p--;
	}
	puts(st);
	
	return 0;
}
