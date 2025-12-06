#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 20  

void MatrixMul(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX],
               int M, int N, int K) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < K; j++) {
            C[i][j] = 0;
            for (int t = 0; t < N; t++) {
                C[i][j] += A[i][t] * B[t][j];
            }
        }
    }
}

void printMatrix(int Mx[MAX][MAX], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%3d ", Mx[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int M, N, K;
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];

    srand((unsigned int)time(NULL)); 

    printf("请输入矩阵A的行数 M 和列数 N：");
    scanf("%d %d", &M, &N);

    printf("请输入矩阵B的列数 K（行数自动为 N）：");
    scanf("%d", &K);


    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            A[i][j] = rand() % 10;


    for (int i = 0; i < N; i++)
        for (int j = 0; j < K; j++)
            B[i][j] = rand() % 10;

    printf("\n矩阵 A （%d × %d）:\n", M, N);
    printMatrix(A, M, N);

    printf("\n矩阵 B （%d × %d）:\n", N, K);
    printMatrix(B, N, K);


    MatrixMul(A, B, C, M, N, K);

    printf("\n矩阵 A * B 结果 C （%d × %d）:\n", M, K);
    printMatrix(C, M, K);

    return 0;
}
