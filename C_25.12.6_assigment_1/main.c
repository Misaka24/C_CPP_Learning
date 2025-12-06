#include <stdio.h>
#include <string.h>

int main(){
    int n;
    printf ("please input the num and words:");
    scanf ("%d",&n);

//使用数组交换
    char words [100][41];

    for(int i=0;i<n;i++){
        scanf("%s",words[i]);
    }

    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-1-i;j++){
            if (strcmp(words[j],words[j+1])>0){
                char temp[41];
                strcpy(temp,words[j]);
                strcpy(words[j],words[j+1]);
                strcpy(words[j+1],temp);
            }
        }
    }

//使用指针交换
//还没完全想好怎么写
/*
char* words [100];
*/

    for (int i=0;i<n;i++){
        printf("%s\n",words[i]);
    }
}
