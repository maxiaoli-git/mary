#include<stdio.h>
#define ONE 1
#define TWO ONE + ONE
#define THREE TWO + ONE
int main(int argc, const char *argv[])
{
	printf("%d\n",THREE * 2 + ONE);
	//THREE *2 + ONE
	//= TWO + ONE *2 + ONE
	//=ONE+ ONE + ONE *2 + ONE
	//=1 + 1 +1 *2 + 1 = 5
	
	return 0;
}
