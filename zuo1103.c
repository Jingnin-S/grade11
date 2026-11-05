#include "stdio.h"
int main(void)
{
    int i,j,k,p=0;
    for(i=1;i<=9;i++)
    {
        for(j=0;j<=9;j++)
        {
            for(k=0;k<=9;k++)
            {
                if((i*100+j*10+k)%13==0&&i!=j&&j!=k&&k!=i)
                {
                    p++;
                    printf("第%d个数:%d\n",p,i*100+j*10+k);
                }
            }
        }
    }
    printf("总共个数:%d\n",p);
}