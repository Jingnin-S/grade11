#include "stdio.h"
int main()
{
    int a,b;
    printf("请输入工资:\n");
    scanf("%d",&a);
    switch(a<=1500?1:a>1500&&a<=4500?2:a>4500&&a<=9000?3:a>9000&&a<=35000?4:a>35000&&a<55000?5:a>55000&&a<=80000?6:7)
    {
        case 1:b=a*0.03;
                printf("工资上税为:%d\n",b);break;
        case 2:b=(a*0.1)-105;
                printf("工资上税为:%d\n",b);break;
        case 3:b=(a*0.2)-555;
                printf("工资上税为:%d\n",b);break;
        case 4:b=(a*0.25)-1005;
                printf("工资上税为:%d\n",b);break;
        case 5:b=(a*0.3)-2755;
                printf("工资上税为:%d\n",b);break;
            
        case 6:b=(a*0.35)-5505;
                printf("工资上税为:%d\n",b);break;
        default:b=(a*0.45)-13505;
                printf("工资上税为:%d\n",b);break;
    }
    return 0;
}