#include <stdio.h>
//typedef :重定义
typedef struct book
{
    int num;
    char *name;
    float price;
}BK;//定义结构体类型（新的数据类型）
void look(BK *q, float a);
int main(float argc, char const *argv[])
{
    BK b[4] = {1, "书1", 35.5, 2, "书2", 40, 3, "书3", 50, 4, "书4", 70};
    float a;
    scanf("%f", &a);
    look(b, a);
    return 0;
}

void look(BK *q, float a)
{
    int i;
    for (i = 0; i < 4; i++)
    {
        if ((q + i)->price > a)
        {
            printf("%d %s %0.1f\n", (q + i)->num, (q + i)->name, (q + i)->price);
        }
    } 
}
