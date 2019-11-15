#include <stdio.h>
int main(int argc, const char *argv[])
{
	int a,b,c,i;
	for(a = 1;a < 10;a++){
		for(b = 0;b < 10;b++){
			for(c = 0;c < 10;c++){
				if(a * 100 + b * 10 + c == a*a*a+b*b*b+c*c*c){
					i = a * 100 + b * 10 + c;
					printf("水仙花数=%d\n",i);
				}	
			}
		}	
	}
	return 0;
}
