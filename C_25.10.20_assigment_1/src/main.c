#include <stdio.h>
#include <math.h>
#define PI 3.1415926
int main()
{
    //输出学号及姓名
    printf("\n学号: 222024321062072\n");
    printf("姓名: 宋龚擎宇\n");
    //输入两边长及夹角
    printf("\n=== 数据输入 ===\n");
    double a;
    double b;
    double angleDeg;
    printf ("请输入第一边边长（单位m）a=");
    if (scanf ("%lf",&a) !=1 || a <=0) {
        printf("输入错误，边长必须为正数。\n");
        return 1;
    }
    printf ("请输入第二边边长（单位m）b=");
    if (scanf ("%lf",&b) !=1 || b <=0) {
        printf("输入错误，边长必须为正数。\n");
        return 1;
    }
    printf ("请输入两边的夹角（单位度）angleDeg=");
    if (scanf ("%lf",&angleDeg) !=1 || angleDeg <=0 || angleDeg >=180) {
        printf("输入错误，夹角必须在0到180度之间。\n");
        return 1;
    }
    //计算第三边的边长
    double angle;
    angle = angleDeg*(PI/180);
    double c;
    c = sqrt (a*a + b*b -2*a*b*cos(angle));
    //计算三角形的周长
    double perimeter = a+b+c;
    //计算三角形的面积
    double area;
    area = 0.5*a*b*sin(angle);
    // 输出结果
    printf("\n=== 计算结果 ===\n");
    printf("第三边的长度为: %.2lf m\n", c);
    printf("三角形的周长为: %.2lf m\n", perimeter);
    printf("三角形的面积为: %.2lf m²\n", area);
    return 0;
    
}