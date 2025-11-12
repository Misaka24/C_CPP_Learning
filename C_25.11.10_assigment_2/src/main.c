#include <stdio.h>
int main(){
    printf("Please enter nums here,end with a character:\n");
    double x, per;
    int n=0;
    int n80=0;
    if (scanf("%lf", &x) != 1) {
        printf("No numbers were entered.\n");
        return 0;
    }
    n++;
    if (x >= 80) {
        n80++;
    }
    while (scanf("%lf", &x) == 1) {
        n++;
        if(x>=80){
            n80++;
        }
    }
    per = (double)n80 / n * 100;
    printf("The total amount of nums is %d, the amount of nums >=80 is %d. The percentage of nums >=80 is: %.2lf%%\n", n, n80, per);
    return 0;
}