#include "stdio.h"
int main()
{
    int a,i;
    i=0;
    printf("输入一个自然数:\n");
    scanf("%d\n",&a);
    while(a!=1)
    {
        if(a%2==0)
        {
            a=a/2;
            i++;
        }
        else
        {
            a=3*a+1;
            i++;
        }
        
    }
    printf("验证成功,计算循环次数为: %d\n",i);
    return 0;
}