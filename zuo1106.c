#include "stdio.h"
int main()
{
    int n;
    float b;
    printf("请输入购买的数量:");
    scanf("%d",&n);
    printf("\n");
    if(n<10&&n>0)
    {
        b=n*65;
        printf("总价:%.2f\n",b);
    }
    else if(n>=10&&n<20)
    {
        b=n*65*0.9;
        printf("总价:%.2f\n",b);
    }
    else if(n>=20&&n<30)
    {
        b=n*65*0.85;
        printf("总价:%.2f\n",b);
    }
    else if(n>=30&&n<50)
    {
        b=n*65*0.8;
        printf("总价:%.2f\n",b);
    }
    else if(n>=50)
    {
        b=n*65*0.6;
        printf("总价:%.2f\n",b);
    }
}