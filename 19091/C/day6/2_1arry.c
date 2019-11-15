#include<stdio.h>
int main(int argc, const char *argv[])
{
	int st[][3] = {1,2,3,4,5,6};
	printf("%d\n",st[1][0]);
	printf("%p,%p\n",st,st+1);//st &st[0][0],st+1,&st[1][0]    
	//st:第一行的行地址
	//st+1:第二行的行地址
	printf("%p,%p\n",st,st[0]);
	//st, st[0] = *(st+0) = *st
	//*st：第一行第一列的地址（*将行地址降级为列地址）

  /* printf("%p,%p\n",st[0]+1,&st[0][1]);
   printf("%p,%p\n",*(st+0)+1,&st[0][1]);
   printf("%p,%p\n",*st+1,&st[0][1]);
   */
/*
   printf("%p,%p\n",st[1]+1,&st[1][1]);
   printf("%p,%p\n",*(st+1)+1,&st[1][1]);
*/  
	return 0;
}
