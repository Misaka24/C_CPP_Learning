#include <stdio.h>
int main(){
    printf("Please enter the size of array:");
    int N, i, j, temp;
    scanf("%d",&N);
    int num[N];
    printf("Please enter the elements of array:");
    for(int i=0;i<N;i++){
        scanf("%d",&num[i]);
    }

    printf("\n");
    double sum = 0;
    double avg = 0;
    for(int i=0;i<N;i++){
        sum += num[i];
    }
    avg = sum / N;

    double max = num[0];
    double min = num[0];
    for(int i=1;i<N;i++){
        if(num[i] > max){
            max = num[i];
        }
        if(num[i] < min){
            min = num[i];
        }
    }

    for(i = 0; i<N - 1; i++){
        for(j = i + 1; j<N; j++ ){
            if(num[j] < num[i]){
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    printf("The sorted array is (From small to large):");
    for(int i=0;i<N;i++){
        printf("%d ",num[i]);
    }

    double median;
    if (N % 2 == 1) { 
        median = num[N / 2];
    } else {
        median = (num[N / 2 - 1] + num[N / 2]) / 2.0;
    }

    printf("\n");
    printf("The average is: %lf\n",avg);
    printf("The max is: %lf\n",max);
    printf("The min is: %lf\n",min);
    printf("The median is = %lf\n", median);
    return 0;
}