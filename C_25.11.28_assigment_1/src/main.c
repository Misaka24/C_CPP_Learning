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
//input n to set a range
    printf("please input n(0<n<=100):\n");
    int n;
    scanf("%d", &n);
//calculate the sum of squares of numbers not related to 7
    int sum = 0;
    for (int i=1; i<=n; i++){
        if(related_function(i) == 0){
            sum = sum + i*i;
        }
    }
//output the result
    printf("the sum is %d\n", sum);
    return 0;
}