#include "stdio.h"
int main()
{
    int a,b;
    printf("请输入工资:\n");
    scanf("%d",&a);
    if(a<=1500)
    {
        b=a*0.03;
        printf("工资上税为:%d\n",b);
    }

    if(a>1500&&a<=4500)
    {
        b=(a*0.1)-105;
        printf("工资上税为:%d\n",b);
    }

    if(a>4500&&a<=9000)
    {
        b=(a*0.2)-555;
        printf("工资上税为:%d\n",b);
    }
    if(a>9000&&a<=35000)
    {
        b=(a*0.25)-1005;
        printf("工资上税为:%d\n",b);
    }
    if(a>35000&&a<55000)
    {
        b=(a*0.3)-2755;
        printf("工资上税为:%d\n",b);
    }
    if(a>55000&&a<=80000)
    {
        b=(a*0.35)-5505;
        printf("工资上税为:%d\n",b);
    }
    if(a>80000)
    {
        b=(a*0.45)-13505;
        printf("工资上税为:%d\n",b);
    }

    return 0;

}