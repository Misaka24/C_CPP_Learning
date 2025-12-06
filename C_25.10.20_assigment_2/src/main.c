#include <stdio.h>
int main() {
    float num;
    printf ("请输入一个数=");
    scanf ("%f", &num);
    if (num >= 0){
        if (num == 0){
            printf ("您输入的数是零\n");
        }
        else{
            printf ("您输入的数是正数\n");
        }
    }
    else {
        printf ("您输入的数是负数\n");
    }
    return 0;
}