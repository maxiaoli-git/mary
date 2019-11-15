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
	struct student stu[3] = {1,"zhangsan",66,2,"lisi",77,3,"wangwu",88};
    struct student *p = stu;
	int i;
	for(i = 0; i < 3; i++)
	{
	printf("%d,%s,%f\n",stu[i].num,stu[i].name,stu[i].score);
	printf("%d,%s,%f\n",p[i].num,p[i].name,p[i].score);
	printf("%d,%s,%f\n",(*(p+i)).num,(*(p+i)).name,(*(p+i)).score);
	printf("%d,%s,%f\n",(p+i)->num,(p+i)->name,(p+i)->score);
	}
	return 0;
}
