#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);         
    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);
        int i;
        int a[100];
        for (i = 0; i < n; i++) a[i] = 2 * (i + 1);
        int first = 1;
        for (i = 0; i < n; i += m) {
            int len = (n - i) < m ? (n - i) : m;
            int sum = 0;
            for (int j = 0; j < len; j++) sum += a[i + j];
            double avg = (double)sum / len;
            if (!first) printf(" ");
            printf("%.2f", avg);
            first = 0;
        }
        printf("\n");
    }
    return 0;
}
