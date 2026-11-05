#include "stdio.h"
#define N 8
int main()
{
    int i,a,pos[N][2]={{14,1},{9,2},{7,3},{10,4},{5,5},{7,6},{11,7},{10,8}};
    for(i=0;i<8;i++)
    {
        a=pos[i][0];
        for(int j=0;j<a;j++)
        {
            printf("-");
            if(j==a-1)
            {
                printf("-*\n");
            }
        }
    }
}