#include "stdio.h"
int main()
{
    float c,f;
    printf("请输入摄氏温度\n");
    scanf("%f\n",&c);

    f=(c*9.0/5)+32;
    printf("转换后的华氏温度为：%.2f\n",f);
    
}