#include<stdio.h>
#include <stdlib.h>
#include<string.h>
char *fun();
int main(int argc, const char *argv[])
{
	char *p = fun();
	//printf("%p\n",p);
	printf("%s\n",p);
	free(p);
	return 0;	
//当主函数遇到return表示:结束整个工程,将控制权交给系统
}
char *fun()
{
	/*char st[] = "hello";
	  st = "world";*/
	//存储在栈区，栈区：由系统自动开辟与释放，
	//pointe_fun.c:12:2:
	//warning: function returns address of local variable [enabled by default]
	//static char st[] = "hello";
	/*char *st = "hello";
	st = "world";//"world":常量区
	printf("%p\n",st);*/
	//void *malloc(size_t size);
	/*int *p = NULL; 
	防止产生野指针
	//野狗
	p = &a;*/

	 char *st = (char *)malloc(100);
	  if(st == NULL)
	  {
		  puts("malloc fail");
	  }
     //st = "hello";
	 strcpy(st,"hello world");
	return st;
	//当子函数遇到return表示:结束子函数的所有操作,返回到调用函数
}
