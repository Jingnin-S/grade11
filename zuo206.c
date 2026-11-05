#include "stdio.h"
int main()
{
    int a,b;
    printf("请输入两个整数:\n");
    scanf("%d,%d\n",&a,&b);
    a+=b;
    b=a-b;
    a=a-b;
    printf("交换后的结果:%d,%d\n",a,b);
    return 0;
}