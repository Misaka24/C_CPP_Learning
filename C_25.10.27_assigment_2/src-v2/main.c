#include <stdio.h>
#include<math.h>
int main(){
    int n;
    printf("请输入一个数字：");
    scanf("%d",&n);
    //取绝对值
    if(n<0){
        n=-n;
    }
    else{
        n=n;
    }
    //计算位数
    int D;
    if (n==0){
        D=1;
    }
    else{
        D=(int)log10(n)+1;
    }
    //输出
    switch (D){
    case 1:
        printf("该数字是个位数。\n");
        break;
    case 2:
        printf("该数字是两位数。\n");
        break;
    default:
        printf("该数字其他数。\n");
        break;
    }
}