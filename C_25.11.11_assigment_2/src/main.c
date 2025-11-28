#include <stdio.h>

int main() {
    printf("Enter number of total cases:\n");
    int n;          
    scanf("%d", &n);
    printf("Enter %d characters in each line:\n", n);
    while (n--) {
        char a, b, c, temp;
        scanf(" %c%c%c", &a, &b, &c); 
        if (a > b) { temp = a; a = b; b = temp; }
        if (a > c) { temp = a; a = c; c = temp; }
        if (b > c) { temp = b; b = c; c = temp; }

        printf("%c %c %c\n", a, b, c);
    }
    return 0;
}
