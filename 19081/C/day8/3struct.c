#include<stdio.h>
#include<string.h>
struct student
{
	int num;
	char *name;
	struct
	{
		float Ch;
		float Ma;
		float Eg;
	}score;
	//	float score;
};
int main(int argc, const char *argv[])
{
	//数据类型 变量名
	struct student stu1;
    stu1.num = 1;
	stu1.name = "zhangsan";
	stu1.score.Ch = 60;
	stu1.score.Ma = 99;
	stu1.score.Eg = 66;
    printf("%d,%s,%f,%f,%f\n",stu1.num,stu1.name, \
			stu1.score.Ch,stu1.score.Ma,stu1.score.Eg);
	return 0;
}
