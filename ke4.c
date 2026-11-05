#include "stdio.h"
char a;int b,flag=0;
void ff(int c,char d)
{
    int i,j,k;
    int e[20][4],b[20];
    char c[4]={'A','B','C','D'};
    for(i=0;i<20;i++)
    {
        for(j=0;j<4;j++)
        {
            e[i][j]=0;
        }
        b[20]=i+1;
    }
    for(k=0;k<4;k++)
        {
                if(d==c[k])
                {
                    d=k;
                }
        }
                    if(e[c-1][w]==0)
                    {
                       flag=1;
                       return 1;
                    
                    }
                    else
                    return -1;
                    }
        }
}
void cc(int c,int d,int e,int f,int g,int h)
{
    for(j=g;j<c;j=j+e)
    {
        for(k=h;k<d;k=k+f)
        {
        if(e[j][k]==0)
        {
            printf("座位已被预订，请重新预订！\n"); 
            goto loop_3;
        }
        else
        {
            printf("座位已全部订满，请换乘！\n");                
        }
        }
    }
}


