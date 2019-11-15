#include<stdio.h>
enum 
{
	MOD = 1,TUS,WED
};
int main(int argc, const char *argv[])
{
	int day;
	scanf("%d",&day);
	switch(day)
	{
	case MOD:
		printf("1\n");
		break;
	case TUS:
		printf("2\n");
		break;
	case WED:
		printf("3\n");
		break;
	default:
		printf("other\n");
	}
	return 0;
}
