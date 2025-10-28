#include <stdio.h>
int main()
{
    int n;
    printf("请输入一个数字：");
    scanf("%d",&n);
    if(n>0&&n<10 || n<0&&n>-10 || n==0)
        printf("该数字是个位数。\n");
    else if(n>9&&n<100 || n<-9&&n>-100)
        printf("该数字是两位数。\n");
    else if(n>99&&n<1000 || n<-99&&n>-1000)
        printf("该数字是三位数。\n");
    else if(n>999&&n<10000 || n<-999&&n>-10000)
        printf("该数字是四位数。\n");
    else
        printf("该数字其他数。\n");
}