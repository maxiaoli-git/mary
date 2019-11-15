#include<stdio.h>
int main(int argc, const char *argv[])
{
	float a;
	scanf("%f",&a);
	if(a < 0 || a > 100)
	{
		printf("input error!\n");
		return -1;
	}
	 if(a >= 90)
		printf("A\n");
	else if(a >=80 && a < 90)
		printf("B\n");
	else if(a >= 70 && a < 80)
		printf("C\n");
	else if(a >= 60 && a < 70)
		printf("D\n");
	else
		printf("sorry you lost\n");

	return 0;
}
