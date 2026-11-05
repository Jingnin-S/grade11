#include "stdio.h"
int main()
{
    float a,c;
    int b;
    
    printf("输入一个浮点数:\n");
    scanf("%f\n",&a);
    b=(int)a;
    c=(a-b) * 1e+6;
    printf("浮点数的整数和小数分别为:%d,%.0f\n",b,c);
    return 0;
}