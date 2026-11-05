#include "stdio.h"
int main()
{
    int a,b,c,d,e,f,g,n,i;
    int max,min,sum;
    max=1;min=100;sum=0;
    printf("请输入评委的人数:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("请输入第%d个评委的打分为:\n",i);
        scanf("%d",&a);
        if(a>=max)
        {
            max=a;
            
        }
        if(a<=min)
        {
            min=a;
            
        }
        sum+=a;
    }
    printf("最高分为:%d,最低分为:%d\n",max,min);
    printf("平均分为:%d\n",(sum-max-min)/(n-2));
    return 0;
}