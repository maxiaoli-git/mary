#include<stdio.h>
int main(int argc, const char *argv[])
{
   int st[5] = {1,2,3,4,9},i;
   int *p = st;
   printf("%d\n",st[4]);
   printf("%p,%p\n",st,st+4);
#if 1
   printf("%d\n",*(st+4));
   printf("%d\n",p[4]);
   printf("%d\n",*(p+4));
#endif
   return 0;
}
