#include<stdio.h>
#include<string.h>
struct student
{
	int num;
	//char name[32];
	char *name;
	float score;
};
int main(int argc, const char *argv[])
{
	//数据类型 变量名
	struct student stu1;
    stu1.num = 1;
	//stu1.name = "zhangsan";//数组不可以整体赋值
    //stu1.name[0] = 'z';
	//strcpy(stu1.name,"zhangsan");
	stu1.name = "zhangsan";
	stu1.score = 60;
    printf("%d,%s,%f\n",stu1.num,stu1.name,stu1.score);
	return 0;
}
