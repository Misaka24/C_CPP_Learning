#include <stdio.h>

//数组交换实现
int main(){
    int input[100];
    int temp[100];
    int n=0;

    //这么写输入数组回车后程序会卡住，推测可能是因为scanf在等待输入？？，换行符被scnaf跳过，不能作为停止符号？？于是加入字母作为结束符，结果下一行的k读取了乱码，暂时不知道原因，注释了，换了下面的更保险的方法，先指定数组的长度再输入
    //不过这么写未达到预期，希望实现输入任意长度的数组再直接回车就行，理论应该读取回车作为结束符，暂时未能实现
    /*
    printf("please input the array:(end with a figure)");
    while(scanf("%d",&input[n])==1){
        n++;
    }
    */

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d numbers: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &input[i]);
    }
    
    printf("\n");

    int k;
    printf("please input the k:");
    scanf("%d",&k);
    k = k%n;

    int j=0;
    for(int i=n-k;i<n;i++){
        temp[j] = input[i];
        j++;
    }

    for (int i=0;i<n-k;i++){
        temp[j] = input[i];
        j++;
    }

    for (int i=0;i<n;i++){
        input[i] = temp[i];
    }

    for (int i=0;i<n;i++){
        printf("%d ",input[i]);
    }
}
