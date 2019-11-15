#include<stdio.h>
#define ONE 1
#define TWO ONE + ONE
#define THREE TWO + ONE
//单纯的替换，不要脑补括号
int main(int argc, const char *argv[])
{
	
	printf("%d\n",THREE * 2 + ONE);
				//TWO + ONE *2 +ONE
				//ONE + ONE + ONE*2 + ONE = 5
	return 0;
}
