#include <stdio.h>
#include <math.h>
#define PI 3.1415926
int main()
{
    //输出学号及姓名
    printf("学号: 222024321062072\n");
    printf("姓名: 宋龚擎宇\n");
    //输入两边长及夹角
    double a;
    double b;
    double angleDeg;
    printf ("请输入第一边边长a=");
    scanf ("%lf",&a);
    printf ("请输入第二边边长b=");
    scanf ("%lf",&b);
    printf ("请输入两边的夹角angleDeg=");
    scanf ("%lf",&angleDeg);
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
    printf("第三边的长度为: %.2lf\n", c);
    printf("三角形的周长为: %.2lf\n", perimeter);
    printf("三角形的面积为: %.2lf\n", area);
    return 0;
    
}