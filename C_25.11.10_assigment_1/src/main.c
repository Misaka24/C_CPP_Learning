#include <stdio.h>
int main(){
    double a, b, c;
    printf("Please enter 3 nums:");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a + b <= c || a + c <= b || b + c <= a)
    {
        printf("These nums can not form a triangle.\n");
    }
    else
    {
        printf("These nums can form a triangle,which is \n");
        if(a == b && b == c)
        {
            printf("an equilateral triangle.\n");
        }
        else if(a == b || a == c || b == c)
        {
            printf("an isosceles triangle.\n");
        }
        else
        {
            printf("a scalene triangle.\n");
        }
    }
}