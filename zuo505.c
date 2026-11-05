#include "stdio.h"
int main()
{
    int i,j,x,b,c,d,e;
    int s[5][5]={{1,1,0,0,1},{0,1,1,1,0},{0,0,0,1,1},{1,0,0,1,0},{0,0,1,0,0}};
    
    for(j=0;j<5;j++)
    {
        for(i=1;i<5;i++)
        {
            if(s[i][j]==s[i+1][j]&&s[i][j]==0)
            {
                b=i;
                c=i+1;
                d=i+2;
                e=j;
            }
        }
    }
    printf("三个元素的行为:%d,%d,%d\n",b,c,d);
    printf("三个元素的列为:%d\n",e-2);
    
}