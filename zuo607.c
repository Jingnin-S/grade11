#include "stdio.h"
#include "string.h"
int main()
{
    unsigned char a[5][2]={{'A',181},{'B',169},{'C',187},{'D',172},{'E',163}};
    int b[5];char d[5];
    int c,i,j;char g;
    for(i=0;i<5;i++)
    {
        c=a[i][1];
        b[i]=c;
    }
    int t;
    for(i=0;i<5;i++)
    {
        for(j=i;j>0;j--)
        {
            if(b[j-1]>=b[j])
            {
                t=b[j];
                b[j]=b[j-1];
                b[j-1]=t;
            }
            else
            {
              continue;  
            }
        }
    }
    for(i=0;i<5;i++)
    {
        g=a[i][0];
        d[i]=g;

    }
    for(i=0;i<5;i++)
    {
        printf("%c",d[i]);
        printf(",");
        printf("%d",b[i]);
        printf("\n");
    }
}
