#include "stdio.h"
int main()
{
    int a,i;
    scanf("%d",&a);
    if(a==1)
    {
        for(i=0;i<101;i++)
        {
            if(i%5==0)
            printf("%d ",i);
        }
    }
    else if(a==2)
    {
        int sum=0;
        for(i=100;i<201;i++)
        {
            if((i%8==0)&&(i%10==0))
            {
                sum+=i;
                printf("%d ",i);
            }
        }
        printf("\n");
        printf("sum=%d\n",sum);
    }
    else
    {
        printf("out of range, please input a number again.\n");
    }
}