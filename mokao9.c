#include "stdio.h"
#define N 8
int main()
{
    int pos[N][2]={{10,8},{11,7},{5,5},{9,2},{14,1},{7,3},{10,4},{7,6}};
    
    for(int i=0;i<N;i++)
    {
        for(int j=i+1;j<8;j++)
        {
            if(pos[i][1]>pos[j][1])
            {
                int t=pos[i][1];
                pos[i][1]=pos[j][1];
                pos[j][1]=t;
                int r=pos[i][0];
                pos[i][0]=pos[j][0];
                pos[j][0]=r;

            }
        }
    }
    for(int i=0;i<N;i++)
    {
        
        printf("(%d,%d)\n",pos[i][0],pos[i][1]);
    }
}