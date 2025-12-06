#include <stdio.h>

int main() {
    int n;
    printf("please input n as the number of rows of the triangle: ");
    scanf("%d", &n);

    int a[20][20] = {0};

    for (int i = 0; i < n; i++) {
        a[i][0] = 1;           
        a[i][i] = 1;           

        for (int j = 1; j < i; j++) {
            a[i][j] = a[i-1][j-1] + a[i-1][j];   
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d", a[i][j]);
            if (j < i) printf(" "); 
        }
        printf("\n");
    }

    return 0;
}
