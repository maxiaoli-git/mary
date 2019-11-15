#include<stdio.h>
#include<string.h>
struct student
{
	int num;
	char *name;
	//char name[32];
	float score;
}stu1,stu2;
int main(int argc, const char *argv[])
{
	//数据类型 变量名
	//struct student stu1,stu2;
    stu1.num = 1;
	stu2.num = 2;
    stu1.name = "zhangsan";
	//同一种结构体类型所对应的变量的成员之间可以相互赋值
	stu2.name = stu1.name;
	stu1.score = 60;
	stu2.score = stu1.score;
    printf("%d,%s,%f\n",stu1.num,stu1.name,stu1.score);
    printf("%d,%s,%f\n",stu2.num,stu2.name,stu2.score);
	return 0;
}
