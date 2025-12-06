#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void func (int arr[],int n){
    for (int i = 0;i < n-1;i++){
        for (int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main(){
    int n;
    printf("please enter the size of the array:");
    scanf("%d",&n);
    //为什么要用随机生成？？？
    srand(time(NULL));
    int arr[n];
    printf("the original array:");
    for(int i = 0;i<n;i++){
        arr[i] = rand()%100+1;
        printf("%d ",arr[i]);
    }
    printf("\n");
    func(arr,n);
    printf("the sorted array :");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}


