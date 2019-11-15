#include<stdio.h>
#include<string.h>
struct student
{
	int num;
	//char *name;
	char name[32];
	float score;
};
int main(int argc, const char *argv[])
{
	//数据类型 变量名
	struct student stu[3] =
	{
		[0] = {
			.num = 1,
			.name = "zhangsan",
			.score = 66,
		},
		[2] = {
			.num = 2,
			.name = "lisi",
			.score = 99.9,
		}	    
	};
    //stu[0].num = 1;
	//stu[0].name = "zhangsan";
	//stu[0].score = 60;
	int i;
	for(i = 0; i < 3; i++)
	{
    printf("%d,%s,%f\n",stu[i].num,stu[i].name,stu[i].score);
	}
    //printf("%d,%s,%f\n",stu[2].num,stu[2].name,stu[2].score);
	return 0;
}
