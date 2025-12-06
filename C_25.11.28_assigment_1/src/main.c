#include <stdio.h>
//judge if the num is related to 7
int related_function(int x){
    if(x%7==0){
        return 1;
    }
    while (x>0){
        if(x%10==7){
            return 1;
        }
        x = x/10;
    }
    return 0;
}

int main(){
//introduce the program
    printf("this program is to calculate the sum of squares of numbers not related to 7 in a given range.\n");
//input n to set a range
    printf("please input n,the range of nums to calculate(0<n<=100):\n");
    int n;
    scanf("%d", &n);
//check the validity of input
    if (n<=0 || n>100){
        printf("invalid input,please input a num between 0 and 100.\n");
        return -1;
    }
//calculate the sum of squares of numbers not related to 7
    int sum = 0;
    for (int each_num=1; each_num<=n; each_num++){
        if(related_function(each_num) == 0){
            sum = sum + each_num*each_num;
        }
    }
//output the result
    printf("the sum is %d\n", sum);
    return 0;
}